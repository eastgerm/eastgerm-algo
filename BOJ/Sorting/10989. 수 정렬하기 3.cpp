//
// Created by kimdong on 2019-05-16.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> nums(10001,0);

void input();
void print(int i, int n);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    int a;
    for(int i=0; i<N; i++) cin >> a, nums[a]++;
}
void print(int i, int n) {
    for(int j=0; j<n; j++) cout << i << '\n';
}
void output() {
    for(int i=1; i<=10000; i++) if(nums[i]) print(i,nums[i]);
}