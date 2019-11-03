//
// Created by kimdong on 2019-10-29.
//

#include <iostream>
#include <vector>

using namespace std;

#define max(x, y) ((x)>(y)?(x):(y))
#define _INF -1000000001

struct info {
    int fromTop;
    int fromLeft;
    int fromRight;
};

int N, M;
vector<vector<int> > map;
vector<vector<info> > dp;

void input();

int result();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    map.assign(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) cin >> map[i][j];
}

int result() {
    dp.assign(N, vector<info>(M, {_INF, _INF, _INF}));
    dp[0][0].fromLeft = map[0][0];
    for (int j = 1; j < M; j++) dp[0][j].fromLeft = dp[0][j - 1].fromLeft + map[0][j];
    for (int i = 1; i < N; i++) {
        // fromTop
        for (int j = 0; j < M; j++) {
            dp[i][j].fromTop = max(dp[i - 1][j].fromTop, max(dp[i - 1][j].fromLeft, dp[i - 1][j].fromRight)) + map[i][j];
        }
        // fromLeft
        for (int j = 1; j < M; j++) {
            dp[i][j].fromLeft = max(dp[i][j - 1].fromTop, dp[i][j - 1].fromLeft) + map[i][j];
        }
        // fromRight
        for (int j = M - 2; j >= 0; j--) {
            dp[i][j].fromRight = max(dp[i][j + 1].fromTop, dp[i][j + 1].fromRight) + map[i][j];
        }
    }
    return max(dp[N - 1][M - 1].fromTop, dp[N - 1][M - 1].fromLeft);
}

void output() {
    cout << result() << '\n';
}