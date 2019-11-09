//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
vector<int> nums;

void inputT();
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) input();
    output();
    return 0;
}

void inputT() {
    cin >> T;
}
void input(){
    int n; cin >> n;
    n != 0 ? nums.push_back(n) : nums.pop_back();
}
void output() {
    int ans = 0;
    int len = nums.size();
    for(int i=0; i<len; i++) ans += nums[i];
    cout << ans << '\n';
}