//
// Created by kimdong on 2019-06-27.
//

#include <iostream>
#include <vector>
using namespace std;

int N;

void input();
int center();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
int center() {
    if(N == 1) return 9;
    vector<int> dp(N+1,0);
    dp[1] = 3;
    for(int i=2; i<=N; i++) dp[i] =  2*dp[i-1] -1;
    return dp[N]*dp[N];
}
void output() {
    cout << center() << '\n';
}