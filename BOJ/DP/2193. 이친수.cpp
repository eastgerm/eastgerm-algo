//
// Created by kimdong on 2018-04-07.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
long long dp[91] = { 0,1 };
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
    for (int i = 2; i <= 90; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
}

void output() {
    ans = dp[N];
    cout << ans << endl;
}