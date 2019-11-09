//
// Created by kimdong on 2018-11-14.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int dp[10][1001] = { 0 };
int ans = 10;

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
    for (int i = 0; i < 10; i++)
        dp[i][1] = 1;
    for (int j = 2; j <= N; j++) {
        for (int i = 0; i < 10; i++) {
            for (int k = 0; k <= i; k++)
                dp[i][j] += dp[k][j - 1];
            dp[i][j] %= 10007;
            if (j == N)
                ans += (dp[i][j] - 1);
        }
    }
    ans %= 10007;
}

void output() {
    cout << ans << endl;
}