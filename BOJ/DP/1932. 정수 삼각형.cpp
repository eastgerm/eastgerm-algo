//
// Created by kimdong on 2018-11-09.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N = 0;
int tri[500][500] = { 0 };
int dp[500][500] = { 0 };
int ans = 0;

void input();
void makeDP();
void findMax();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    makeDP();
    findMax();
    output();

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j <= i; j++)
            cin >> tri[i][j];
}

void makeDP() {
    int a, b = 0;
    dp[0][0] = tri[0][0];
    for (int i = 1; i < N; i++)
        for (int j = 0; j <= i; j++) {
            if (!j)
                a = -1, b = dp[i - 1][j] + tri[i][j];
            else if (j == i)
                a = dp[i - 1][j - 1] + tri[i][j], b = -1;
            else
                a = dp[i - 1][j - 1] + tri[i][j], b = dp[i - 1][j] + tri[i][j];
            dp[i][j] = MAX(a, b);
        }
}

void findMax() {
    ans = dp[N - 1][0];
    for (int j = 1; j < N; j++)
        ans = MAX(ans, dp[N - 1][j]);
}

void output() {
    cout << ans << endl;
}