//
// Created by kimdong on 2019-05-22.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
int N;
vector<long long> dp;

void inputT();
void koong();
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    koong();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void koong() {
    dp.assign(68,0);
    dp[0] = dp[1] = 1, dp[2] = 2, dp[3] = 4;
    for(int i=4; i<=67; i++) dp[i] = dp[i-4] + dp[i-3] + dp[i-2] + dp[i-1];
}
void input() {
    cin >> N;
}
void output() {
    cout << dp[N] << '\n';
}