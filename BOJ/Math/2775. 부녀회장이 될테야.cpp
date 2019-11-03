//
// Created by kimdong on 2019-05-27.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
int N,K;
vector<vector<int>> dp;

void inputT();
void makeDP();
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    makeDP();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() { cin >> T; }
void makeDP() {
    dp.assign(15,vector<int>(15,0));
    for(int i=0; i<=14; i++)
        for(int j=1; j<=14; j++) dp[i][j] = i == 0 ? j : dp[i][j-1]+dp[i-1][j];
}
void input() { cin >> N >> K; }
void output() { cout << dp[N][K] << '\n'; }