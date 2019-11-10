//
// Created by kimdong on 2018-11-14.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

struct int2 {
    int time;
    int pay;
};

int N = 0;
int2 day[16] = { {0,0} };
int dp[16] = { 0 };
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
        cin >> day[i].time >> day[i].pay;
}

void makeDP() {
    dp[N] = day[N].time == 1 ? day[N].pay : 0;
    for (int i = N - 1; i > 0; i--) {
        int finish = i + day[i].time;
        dp[i] = finish > N + 1 ? dp[i + 1] : MAX(dp[finish] + day[i].pay, dp[i + 1]);
    }
    ans = dp[1];
}

void output() {
    cout << ans << endl;
}