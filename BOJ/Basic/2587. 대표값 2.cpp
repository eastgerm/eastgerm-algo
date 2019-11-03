//
// Created by kimdong on 2019-05-29.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nums;
int sum;
int ans1,ans2;

void input();
void field();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    field();
    output();
    return 0;
}

void input() {
    nums.assign(5,0);
    for(int i=0; i<5; i++) cin >> nums[i], sum += nums[i];
}
void field() {
    ans1 = sum/5;
    sort(nums.begin(),nums.end());
    ans2 = nums[2];
}
void output() { cout << ans1 << '\n' << ans2 << '\n'; }