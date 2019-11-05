//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nums,prior;
int target;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    nums.assign(9,0);
    prior.assign(9,1);
    prior[0] = prior[1] = 0;
    for(int i=0; i<9; i++) cin >> nums[i], target += nums[i];
    target -= 100;
}
void output() {
    do {
        int sum = 0;
        for(int i=0; i<9; i++) if(!prior[i]) sum += nums[i];
        if(sum == target) break;
    } while(next_permutation(prior.begin(),prior.end()));
    for(int i=0; i<9; i++) if(prior[i]) cout << nums[i] << '\n';
}