//
// Created by kimdong on 2018-04-02.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int T = 0;
int N = 0;
int dp[12] = { 0,1,2,4 };

void inputT();
void makeDP();
void solve();
void input();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    inputT();
    makeDP();
    solve();

    return 0;
}

void inputT() {
    cin >> T;
}

void makeDP() {
    for (int i = 4; i <= 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

void solve() {
    for (int tc = 1; tc <= T; tc++) {
        input();
        output();
    }
}

void input() {
    cin >> N;
}

void output() {
    cout << dp[N] << endl;
}