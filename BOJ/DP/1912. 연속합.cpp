//
// Created by kimdong on 2018-04-28.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N = 0;
int num[100001] = { 0 };
int dp[100001] = { 0 };
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
        cin >> num[i];
}

void makeDP() {
    int a, b = 0;
    dp[1] = num[1];
    int king = num[1];

    for (int i = 2; i <= N; i++) {
        a = king + num[i];
        b = num[i];

        king = MAX(a, b);
        dp[i] = MAX(dp[i - 1], king);
    }
    ans = dp[N];
}

void output() {
    cout << ans << endl;
}