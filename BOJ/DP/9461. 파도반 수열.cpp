//
// Created by kimdong on 2018-04-29.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T = 0;
int N = 0;
int P[101] = { 0 };
long long dp[101] = { 0,1,1,1,2 };

void inputT();
void makeDP();
void solve();
void input();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    inputT();
    makeDP();
    solve();

    return 0;
}

void inputT() {
    cin >> T;
}

void makeDP() {
    for (int i = 5; i <= 100; i++)
        dp[i] = dp[i - 1] + dp[i - 5];
}

void solve() {
    for (int tc = 1; tc <= T; tc++) {
        input();
        output();
    }
}

void input() {
    cin >> N;
}

void output() {
    cout << dp[N] << endl;
}