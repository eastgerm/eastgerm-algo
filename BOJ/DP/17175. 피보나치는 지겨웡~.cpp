//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> dp;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
int result() {
    dp.assign(N+1,0);
    dp[0] = dp[1] = 1;
    for(int i=2; i<=N; i++) dp[i] = (1 + dp[i-2] + dp[i-1]) % 1000000007;
    return dp[N];
}
void output() {
    cout << result() << '\n';
}