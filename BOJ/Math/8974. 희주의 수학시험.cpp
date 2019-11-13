//
// Created by kimdong on 2019-11-13.
//

#include <iostream>
#include <vector>

using namespace std;

int a, b;
vector<int> nums(1, 0);

void input();

void fillNums();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> a >> b;
    fillNums();
}

void fillNums() {
    int nowNum = 1;
    for (int i = 1; i <= 1000; i++) {
        int lastIndex = nowNum * (nowNum + 1) / 2;
        nums.push_back(nowNum);
        if (i == lastIndex) nowNum++;
    }
}

void output() {
    int ans = 0;
    for (int i = a; i <= b; i++) ans += nums[i];
    cout << ans << '\n';
}