//
// Created by kimdong on 2019-06-04.
//

#include <iostream>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

struct int2 {
    int up;
    int down;
};

int N;
vector<int> nums;

void input();
int bitonic();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    nums.assign(N+1,0);
    for(int i=1; i<=N; i++) cin >> nums[i];
}
int bitonic() {
    int ans = 1;
    vector<int2> dp(N+1,{1,1});
    for(int i=2; i<=N; i++) {
        for(int j=1; j<i; j++) {
            if(nums[j] < nums[i]) dp[i].up = MAX(dp[i].up, dp[j].up + 1);
            else if(nums[j] > nums[i]) dp[i].down = MAX(dp[i].down, MAX(dp[j].up,dp[j].down) + 1);
        }
        ans = MAX(ans, MAX(dp[i].up,dp[i].down));
    }
    return ans;
}
void output() {
    cout << bitonic() << '\n';
}