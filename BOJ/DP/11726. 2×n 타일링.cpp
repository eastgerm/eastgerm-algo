//
// Created by kimdong on 2018-04-02.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int dp[1001] = { 0,1,2 };
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
    for (int i = 3; i <= 1000; i++)
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
}

void output() {
    ans = dp[N];
    cout << ans << endl;
}