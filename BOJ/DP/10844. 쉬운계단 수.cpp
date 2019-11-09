//
// Created by kimdong on 2018-11-12.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
long long dp[10][101] = { 0 };
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
}

void makeDP() {
    for (int i = 1; i < 10; i++)
        dp[i][1] = 1;
    for (int j = 2; j <= N; j++) {
        for (int n = 0; n < 10; n++) {
            if (!n)
                dp[n][j] = dp[n + 1][j - 1] % 1000000000;
            else if(n==9)
                dp[n][j] = dp[n - 1][j - 1] % 1000000000;
            else
                dp[n][j] = (dp[n - 1][j - 1] + dp[n + 1][j - 1]) % 1000000000;
        }
    }
    for (int i = 0; i < 10; i++)
        ans += dp[i][N];
}

void output() {
    cout << ans % 1000000000 << endl;
}