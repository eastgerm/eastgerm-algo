//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int N;

void input();
int result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
int result() {
    if(N == 0) return 0;
    if(N > 0) {
        vector<int> dp(N+1,0);
        dp[0] = 0, dp[1] = 1;
        for(int i=2; i<=N; i++) dp[i] = (dp[i-2] + dp[i-1])%1000000000;
        return dp[N];
    }
    else {
        vector<int> dp(-N+1,0);
        dp[0] = 0, dp[1] = 1;
        for(int i=-2; i>=N; i--) dp[-i] = (dp[-i-2] - dp[-i-1])%1000000000;
        return dp[-N];
    }
}
void output() {
    int ans = result();
    if(ans == 0) cout<< "0\n0\n";
    else if(ans > 0) cout << "1\n" << ans << '\n';
    else cout << "-1\n" << -ans << '\n';
}