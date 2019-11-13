//
// Created by kimdong on 2019-11-13.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int start, finish;
vector<int> nums;

void func();

void sorting();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    for (int i = 1; i <= 20; i++) nums.push_back(i);
    for (int i = 0; i < 10; i++) sorting();
    for (int i = 0; i < 20; i++) cout << nums[i] << ' ';
    cout << '\n';
}

void sorting() {
    cin >> start >> finish;
    reverse(nums.begin() + (start - 1), nums.begin() + finish);
}