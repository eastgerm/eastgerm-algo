//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int nums[4];
    for (int i = 0; i < 4; i++) cin >> nums[i];
    sort(nums, nums + 4);
    cout << nums[0] * nums[2] << '\n';
    return 0;
}