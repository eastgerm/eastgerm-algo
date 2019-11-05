//
// Created by kimdong on 2019-06-16.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N;
vector<int> nums(3,0);

void func();
void input();
string result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while(true) {
        input();
        if(nums[0] == 0 && nums[1] == 0 && nums[2] == 0) return;
        output();
    }
}
void input() {
    cin >> nums[0] >> nums[1] >> nums[2];
}
string result() {
    sort(nums.begin(),nums.end());
    bool possible = nums[2]*nums[2] == nums[0]*nums[0] + nums[1]*nums[1];
    return possible ? "right\n" : "wrong\n";
}
void output() {
    cout << result();
}