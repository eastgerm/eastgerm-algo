//
// Created by kimdong on 2018-11-22.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string pw;
int lenPW = 0;
int dp[5001] = { 1 };
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
    cin >> pw;
    lenPW = pw.length();
}

void makeDP() {
    dp[1] = pw[0] == '0' ? 0 : 1;
    for (int i = 2; i <= lenPW; i++) {
        if (pw[i - 1] != '0')
            dp[i] += dp[i - 1];
        if (pw[i - 2] == '1')
            dp[i] += dp[i - 2];
        if (pw[i - 2] == '2' && (pw[i - 1] >= '0'&&pw[i - 1] <= '6'))
            dp[i] += dp[i - 2];
        dp[i] %= 1000000;
    }
    ans = dp[lenPW];
}

void output() {
    cout << ans << endl;
}