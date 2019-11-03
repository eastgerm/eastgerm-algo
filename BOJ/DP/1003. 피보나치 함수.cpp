//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct int2 {
    int zero;
    int one;
};

int T = 0;
int N = 0;
int2 dp[41] = { {1,0},{0,1} };

void inputT();
void solve();
void makeDP();
void input();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    inputT();
    solve();

    return 0;
}

void inputT() {
    cin >> T;
}

void solve() {
    makeDP();
    for (int rp = 1; rp <= T; rp++) {
        input();
        output();
    }
}

void makeDP() {
    for (int i = 2; i <= 40; i++)
        dp[i] = { dp[i - 2].zero + dp[i - 1].zero,dp[i - 2].one + dp[i - 1].one };
}

void input() {
    cin >> N;
}

void output() {
    cout << dp[N].zero << " " << dp[N].one << endl;
}