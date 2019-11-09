//
// Created by kimdong on 2019-06-02.
//

#include <iostream>
#include <vector>
using namespace std;

int N,M;
vector<int> nums,dp;

void input();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    return 0;
}

void input() {
    cin >> N >> M;
    nums.assign(N+1,0);
    dp.assign(N+1,0);
    for(int i=1; i<=N; i++) cin >> nums[i], dp[i] = dp[i-1] + nums[i];
    for(int i=0; i<M; i++) {
        int a,b;
        cin >> a >> b;
        cout << dp[b] - dp[a-1] << '\n';
    }
}