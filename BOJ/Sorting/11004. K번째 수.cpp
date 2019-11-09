//
// Created by kimdong on 2019-06-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,K;
vector<int> nums;

void input();
void output();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i];
}
void output(){
    sort(nums.begin(),nums.end());
    cout << nums[K-1] << '\n';
}