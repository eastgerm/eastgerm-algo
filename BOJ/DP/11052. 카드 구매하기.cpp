//
// Created by kimdong on 2018-11-13.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N = 0;
int P[1001] = { 0 };
int dp[1001] = { 0 };
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
    for (int i = 1; i <= N; i++)
        cin >> P[i];
}

void makeDP() {
    dp[1] = P[1];
    for (int i = 2; i <= N; i++) {
        dp[i] = P[i];
        for (int j = 1; j <= i / 2; j++)
            dp[i] = MAX(dp[i], dp[j] + dp[i - j]);
    }
    ans = dp[N];
}

void output() {
    cout << ans << endl;
}