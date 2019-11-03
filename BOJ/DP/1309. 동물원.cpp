//
// Created by kimdong on 2018-11-16.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int dp[100001][3] = { {0},{1,1,1} };
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
    cin >> N;
}

void makeDP() {
    for (int i = 2; i <= N; i++) {
        dp[i][0] = (dp[i - 1][1] + dp[i - 1][2]) % 9901;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % 9901;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % 9901;
    }
    ans = (dp[N][0] + dp[N][1] + dp[N][2]) % 9901;
}

void output() {
    cout << ans << endl;
}