//
// Created by kimdong on 2018-04-10.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

struct int4 {
    int one;
    int pair;
    int none;
    int max;
};

int N = 0;
int dioni[10001] = { 0 };
int4 dp[10001] = { {0,0} };
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
        cin >> dioni[i];
}

void makeDP() {
    dp[1] = { dioni[1],dioni[1],0,dioni[1] };
    for (int i = 2; i <= N; i++) {
        dp[i].one = dp[i - 2].max + dioni[i];
        dp[i].pair = dp[i - 1].one + dioni[i];
        dp[i].none = dp[i - 1].max;
        dp[i].max = MAX(dp[i].one, MAX(dp[i].pair, dp[i].none));
    }
    ans = dp[N].max;
}

void output() {
    cout << ans << endl;
}