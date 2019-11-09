//
// Created by kimdong on 2018-11-16.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int K = 0;
int dp[1001][1001] = { {0},{1,1} };

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
    cin >> N >> K;
}

void makeDP() {
    for (int i = 1; i <= N; i++)
        for (int j = 0; j <= i / 2; j++)
            !j ? dp[i][j] = dp[i][i - j] = 1 : dp[i][j] = dp[i][i - j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
}

void output() {
    cout << dp[N][K] << endl;
}