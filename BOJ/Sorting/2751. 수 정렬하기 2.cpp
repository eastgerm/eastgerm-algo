//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> nums;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i];
}
void output() {
    sort(nums.begin(),nums.end());
    for(int i=0; i<N; i++) cout << nums[i] << '\n';
}