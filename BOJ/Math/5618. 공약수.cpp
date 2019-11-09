//
// Created by kimdong on 2019-06-16.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> nums;

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
    if(N == 2) nums.push_back(nums[1]);
}
void output() {
    sort(nums.begin(),nums.end());
    int range = nums[0];
    for(int i=1; i<=range; i++)
        if(nums[0]%i == 0 && nums[1]%i == 0 && nums[2]%i == 0)
            cout << i << '\n';
}