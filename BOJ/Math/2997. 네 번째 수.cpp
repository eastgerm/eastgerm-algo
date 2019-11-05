//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int nums[3];
    for (int i = 0; i < 3; i++) cin >> nums[i];
    sort(nums, nums + 3);
    if (nums[1] - nums[0] == nums[2] - nums[1]) cout << 2 * nums[2] - nums[1] << '\n';
    else if(nums[1] - nums[0] < nums[2] - nums[1]) cout << 2 * nums[1] - nums[0] << '\n';
    else cout << 2 * nums[1] - nums[2] << '\n';
    return 0;
}