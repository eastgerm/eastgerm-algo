//
// Created by kimdong on 2019-11-09.
//

#include <iostream>
#include <vector>

using namespace std;

#define min(x, y) ((x)<(y)?(x):(y))

int N;
vector<vector<int>> cost, dp;

void input();

void setFirstHouseCost();

int minimumCost();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    cost.assign(N + 1, vector<int>(3, 0));
    for (int i = 1; i <= N; i++)
        for (int j = 0; j < 3; j++) cin >> cost[i][j];
}

void setFirstHouseCost() {
    for (int i = 0; i < 3; i++) dp[1][i] = cost[1][i];
}

int minimumCost() {
    dp.assign(N + 1, vector<int>(3, 0));
    setFirstHouseCost();
    for (int i = 2; i <= N; i++) {
        dp[i][0] = cost[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = cost[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = cost[i][2] + min(dp[i - 1][1], dp[i - 1][0]);
    }
    return min(dp[N][0], min(dp[N][1], dp[N][2]));
}

void output() {
    cout << minimumCost() << '\n';
}