//
// Created by kimdong on 2018-11-14.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N = 0;
int M = 0;
int map[1001][1001] = { 0 };
int dp[1001][1001] = { 0 };
int ans = 0;

void input();
void makeDP();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    makeDP();
    output();

    return 0;
}

void input() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> map[i][j];
}

void makeDP() {
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            dp[i][j] = MAX(dp[i - 1][j - 1], MAX(dp[i - 1][j], dp[i][j - 1])) + map[i][j];
    ans = dp[N][M];
}

void output() {
    cout << ans << endl;
}