//
// Created by kimdong on 2019-10-29.
//

#include <iostream>
#include <vector>

using namespace std;

#define MIN(x, y) ((x)<(y)?(x):(y))

int N;
vector<int> delta;
vector<vector<int> > dp;

void input();

int result();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    int a, b;
    cin >> a >> b;
    delta.push_back(a), delta.push_back(b);
    for (int i = 1; i < N; i++) {
        cin >> a >> b;
        delta.push_back(b);
    }
}

int result() {
    dp.assign(N, vector<int>(N, 0));
    for (int j = 1; j < N; j++) {
        for (int i = j - 1; i >= 0; i--) {
            int min = 0;
            for (int k = i; k < j; k++) {
                if (k == i) min = dp[i][k] + dp[k + 1][j] + (delta[i] * delta[k + 1] * delta[j + 1]);
                else min = MIN(min, dp[i][k] + dp[k + 1][j] + (delta[i] * delta[k + 1] * delta[j + 1]));
            }
            dp[i][j] = min;
        }
    }
    return dp[0][N - 1];
}

void output() {
    cout << result() << '\n';
}