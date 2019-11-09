//
// Created by kimdong on 2018-04-10.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N = 0;
int A[1001] = { 0 };
int dp[1001] = { 0 };
int ans = 1;

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
    dp[1] = 1;
    for (int i = 2; i <= N; i++) {
        int max = 1;
        for (int j = 1; j < i; j++) {
            if (A[j] < A[i])
                max = MAX(max, dp[j] + 1);
        }
        dp[i] = max;
        ans = MAX(ans, dp[i]);
    }
}

void output() {
    cout << ans << endl;
}