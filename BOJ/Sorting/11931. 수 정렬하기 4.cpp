//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> nums;

bool compare(int a, int b) {
    return a > b;
}
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i];
    sort(nums.begin(),nums.end(),compare);
}
void output() {
    for(int i=0; i<N; i++) cout << nums[i] << '\n';
}