//
// Created by kimdong on 2018-05-01.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int dp[31] = { 0, 0, 3 };
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
    for (int i = 4; i <= 30; i += 2) {
        for (int j = 2; j < i; j += 2)
            i - j == 2 ? dp[i] += dp[j] * 3 : dp[i] += dp[j] * 2;
        dp[i] += 2;
    }
    ans = dp[N];
}

void output() {
    cout << ans << endl;
}