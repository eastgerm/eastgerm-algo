//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;
int sum;

void input();
void check();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    check();
    output();
    return 0;
}

void input() {
    cin >> s;
}
void check() {
    vector<vector<int>> nums;
    int numCnt = 0;
    nums.emplace_back(vector<int>());
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i] != ',') nums[numCnt].push_back(s[i]-'0');
        else nums.emplace_back(vector<int>()), numCnt++;
    }
    for(int i=0; i<=numCnt; i++) {
        int num = 0;
        int numLen = nums[i].size();
        int now10 = 1;
        for(int j=numLen-1; j>=0; j--) {
            num += nums[i][j]*now10;
            now10 *= 10;
        }
        sum += num;
    }
}
void output() {
    cout << sum << '\n';
}