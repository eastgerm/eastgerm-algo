//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int n,T;
vector<int> nums;

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
    cin >> n >> T;
    nums.assign(n+1,0);
    for(int i=1; i<=n; i++) cin >> nums[i];
}
int result() {
    int total = 0;
    for(int i=1; i<=n; i++) {
        if(total <= T && total+nums[i] > T) return i-1;
        total += nums[i];
    }
    return n;
}
void output() {
    cout << result() << '\n';
}