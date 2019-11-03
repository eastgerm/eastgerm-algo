//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
using namespace std;

long long N,P,Q;
vector<long long> dp;

void input();
void makeDP();
long long inf(long long n);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    makeDP();
    output();
    return 0;
}

void input() {
    cin >> N >> P >> Q;
}
void makeDP() {
    dp.assign(10000001,0);
    dp[0] = 1;
    for(int i=1; i<=10000000; i++) dp[i] = dp[i/P]+dp[i/Q];
}
long long inf(long long n) {
    if(n <= 10000000) return dp[n];
    return inf(n/P) + inf(n/Q);
}
void output() {
    cout << inf(N) << '\n';
}