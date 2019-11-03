//
// Created by kimdong on 2019-05-04.
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

void input(){
    cin >> N;
}
int result(){
    dp.assign(N+1,0);
    dp[1] = 1,dp[2] = 2;
    for(int i=3; i<=N; i++) dp[i] = (dp[i-1]+dp[i-2]) % 15746;
    return dp[N];
}
void output(){
    cout << result() << '\n';
}