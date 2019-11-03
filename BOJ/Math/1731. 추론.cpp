//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <vector>

using namespace std;

int N;

void func();

int main() {
    func();
    return 0;
}

void func() {
    cin >> N;
    vector<int> nums(N, 0);
    for (int i = 0; i < N; i++) cin >> nums[i];
    if (nums[2] - nums[1] == nums[1] - nums[0]) cout << nums[N - 1] + (nums[1] - nums[0]) << '\n';
    else cout << nums[N - 1] * (nums[1] / nums[0]) << '\n';
}