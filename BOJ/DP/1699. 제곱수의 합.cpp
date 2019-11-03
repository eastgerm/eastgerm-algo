//
// Created by kimdong on 2018-05-01.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int N = 0;
int dp[100001] = { 0,1 };
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

void input(){
    cin >> N;
}

void makeDP(){
    for (int i = 2; i <= 100000; i++){
        dp[i] = i;
        for (int j = 1; j*j <= i; j++)
            dp[i] = MIN(dp[i], 1 + dp[i - j*j]);
    }
    ans = dp[N];
}

void output(){
    cout << ans << endl;
}