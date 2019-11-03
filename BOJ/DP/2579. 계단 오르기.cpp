//
// Created by kimdong on 2018-04-28.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

struct int2 {
    int from1;
    int from2;
};

int N = 0;
int step[301] = { 0 };
int2 dp[301] = { { 0,0 } };
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
        cin >> step[i];
}

void makeDP() {
    dp[1] = { step[1],0 };
    dp[2] = { step[1] + step[2],step[2] };
    for (int i = 3; i <= N; i++) {
        dp[i].from1 = dp[i - 1].from2 + step[i];
        dp[i].from2 = MAX(dp[i - 2].from1, dp[i - 2].from2) + step[i];
    }
    ans = MAX(dp[N].from1, dp[N].from2);
}

void output() {
    cout << ans << endl;
}