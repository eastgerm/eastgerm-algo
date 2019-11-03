//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
    nums.assign(3,0);
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums.begin(),nums.end());
}
int result() {
    int ans = 0;
    if(nums[0] == nums[2]) ans = 10000 + nums[0]*1000;
    else if(nums[1] == nums[0] || nums[1] == nums[2]) ans = 1000 + nums[1]*100;
    else ans = nums[2]*100;
    return ans;
}
void output() {
    cout << result() << '\n';
}