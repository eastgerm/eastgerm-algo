//
// Created by kimdong on 2018-04-02.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int dp[1001] = { 0,1,3 };
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
    for (int i = 3; i <= N; i++)
        dp[i] = (2 * dp[i - 2] + dp[i - 1]) % 10007;
    ans = dp[N];
}

void output() {
    cout << ans << endl;
}