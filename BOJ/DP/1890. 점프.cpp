//
// Created by kimdong on 2018-11-16.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int map[101][101] = { 0 };
long long dp[101][101] = { {0},{0,1} };
long long ans = 0;

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
    cin >> N;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            cin >> map[i][j];
}

void makeDP() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == N&&j == N) {
                ans = dp[N][N];
                break;
            }
            int dis = map[i][j];
            i + dis <= N ? dp[i + dis][j] += dp[i][j] : 1;
            j + dis <= N ? dp[i][j + dis] += dp[i][j] : 1;
        }
    }
}

void output() {
    cout << ans << endl;
}