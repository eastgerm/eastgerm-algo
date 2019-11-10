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
    int ans = nums[0] + nums[3] - nums[1] - nums[2];
    if (ans < 0) ans *= -1;
    cout << ans << '\n';
    return 0;
}