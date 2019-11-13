//
// Created by kimdong on 2019-11-13.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> nums;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    cin >> N;
    nums.assign(N, 0);
    for (int i = 0; i < N; i++) cin >> nums[i];
    sort(nums.begin(), nums.end());
    cout << nums[N - 1] - nums[0] << '\n';
}