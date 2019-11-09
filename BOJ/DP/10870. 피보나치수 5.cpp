//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> dp(N + 1, 0);
    dp[1] = 1;
    for (int i = 2; i <= N; i++) dp[i] = dp[i - 2] + dp[i - 1];
    cout << dp[N] << '\n';
    return 0;
}