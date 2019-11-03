//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        vector<int> nums(10, 0);
        for (int i = 0; i < 10; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        cout << nums[7] << '\n';
    }
    return 0;
}