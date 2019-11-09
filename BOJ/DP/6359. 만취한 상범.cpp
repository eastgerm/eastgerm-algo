//
// Created by kimdong on 2018-11-16.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T = 0;
int door[101] = { 0 };
int dp[101] = { 0 };
int N = 0;

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
    for (int j = 2; j <= 100; j++)
        for (int num = 1; num <= 100; num++) {
            num%j ? 1 : door[num]++;
            if (j >= 5 && num <= j)
                door[num] % 2 ? 1 : dp[j]++;
        }
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