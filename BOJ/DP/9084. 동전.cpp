//
// Created by kimdong on 2019-05-23.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
int N,M;
vector<int> coin;

void inputT();
void input();
int makeDP();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> N;
    coin.assign(N,0);
    for(int i=0; i<N; i++) cin >> coin[i];
    cin >> M;
}
int makeDP() {
    vector<int> dp(M+1,0);
    dp[0] = 1;
    for(int i=0; i<N; i++)
        for(int j=coin[i]; j<=M; j++) dp[j] += dp[j-coin[i]];
    return dp[M];
}
void output() {
    cout << makeDP() << '\n';
    coin.clear();
}