//
// Created by kimdong on 2019-04-10.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int T = 0;
int N = 0;
int label[2][100001] = { 0 };
int dp[3][100001] = { 0 };
int ans = 0;

void inputT();
void solve();
void input();
void makeDP();
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
    for (int tc = 1; tc <= T; tc++) {
        input();
        makeDP();
        output();
    }
}

void input() {
    cin >> N;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < N; j++)
            cin >> label[i][j];
}

void makeDP() {
    dp[0][0] = label[0][0];
    dp[1][0] = label[1][0];
    dp[2][0] = 0;
    for (int i = 1; i < N; i++) {
        dp[0][i] = MAX(dp[1][i - 1], dp[2][i - 1]) + label[0][i];
        dp[1][i] = MAX(dp[0][i - 1], dp[2][i - 1]) + label[1][i];
        dp[2][i] = MAX(dp[0][i - 1], dp[1][i - 1]);
    }
    ans = MAX(dp[0][N - 1], dp[1][N - 1]);
}

void output() {
    cout << ans << endl;
}