//
// Created by kimdong on 2019-05-17.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
vector<int> dp(80001,0);

void junseok();
void inputT();
void inOut();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    junseok();
    inputT();
    for(int i=0; i<T; i++) inOut();
    return 0;
}

void junseok() {
    for(int i=3; i<=80000; i++) {
        dp[i] = dp[i-1];
        if(i%3 == 0 || i%7 == 0) dp[i] += i;
    }
}
void inputT() {
    cin >> T;
}
void inOut() {
    int a;
    cin >> a;
    cout << dp[a] << '\n';
}