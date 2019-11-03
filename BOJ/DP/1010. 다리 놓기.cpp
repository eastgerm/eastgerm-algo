//
// Created by kimdong on 2018-11-13.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T = 0;
int N = 0;
int M = 0;
int dp[31][31] = { 0 };

void inputT();
void solve();
void input();
void makeDP();
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
    for (int i = 0; i <= 30; i++)
        for (int j = 0; j <= i / 2; j++)
            !j ? dp[i][j] = dp[i][i - j] = 1 : dp[i][j] = dp[i][i - j] = dp[i - 1][j - 1] + dp[i - 1][j];
}

void solve() {
    for (int tc = 1; tc <= T; tc++) {
        input();
        output();
    }
}

void input() {
    cin >> N >> M;
}

void output() {
    cout << dp[M][N] << endl;
}