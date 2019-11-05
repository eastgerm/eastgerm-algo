//
// Created by kimdong on 2019-05-30.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> nums;
string s;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    nums.assign(3,0);
    cin >> nums[0] >> nums[1] >> nums[2] >> s;
}
void output() {
    sort(nums.begin(),nums.end());
    for(int i=0; i<3; i++) cout << nums[s[i]-'A'] << ' ';
    cout << '\n';
}