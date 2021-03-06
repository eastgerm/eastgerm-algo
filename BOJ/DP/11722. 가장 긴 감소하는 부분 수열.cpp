//
// Created by kimdong on 2018-04-11.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N = 0;
int A[1001] = { 0 };
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
        cin >> A[i];
}

void makeDP() {
    ans = dp[1] = 1;
    for (int i = 2; i <= N; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
            A[j] > A[i] ? dp[i] = MAX(dp[i], dp[j] + 1) : 1;
        ans = MAX(ans, dp[i]);
    }
}

void output() {
    cout << ans << endl;
}