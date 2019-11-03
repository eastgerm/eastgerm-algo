//
// Created by kimdong on 2019-05-21.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,K;
vector<int> coin;
vector<int> dp;

void input();
int makeDP();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
    coin.assign(N,0);
    for(int i=0; i<N; i++) cin >> coin[i];
}
int makeDP() {
    dp.assign(K+1,0);
    dp[0] = 1;
    for(int i=0; i<N; i++) {
        int currentCoin = coin[i];
        for(int j=currentCoin; j<=K; j++) dp[j] += dp[j-currentCoin];
    }
    return dp[K];
}
void output() {
    cout << makeDP() << '\n';
}
