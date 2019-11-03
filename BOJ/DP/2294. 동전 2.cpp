//
// Created by kimdong on 2019-05-21.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int n,k;
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
    cin >> n >> k;
    coin.assign(n,0);
    dp.assign(k+1,10001);
    for(int i=0; i<n; i++) {
        cin >> coin[i];
        if(coin[i] <= k) dp[coin[i]] = 1;
    }
}
int makeDP() {
    sort(coin.begin(),coin.end());
    for(int i=1; i<=k; i++) {
        if(dp[i] != 1) {
            for(int j=0; j<n; j++) {
                if(i-coin[j] <= 0) break;
                int prevCoin = dp[i-coin[j]];
                if(prevCoin != 10001)
                    dp[i] = MIN(dp[i],prevCoin + 1);
            }
        }
    }
    int ans = dp[k] == 10001 ? -1 : dp[k];
    return ans;
}
void output() {
    cout << makeDP() << '\n';
}
