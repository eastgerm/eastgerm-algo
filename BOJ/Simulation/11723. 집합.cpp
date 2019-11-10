//
// Created by kimdong on 2019-08-28.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int T;
string type;
int x;
vector<bool> nums(21, false);

void inputT();

void input();

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for (int tc = 0; tc < T; tc++) {
        input();
        func();
    }
    return 0;
}

void inputT() {
    cin >> T;
}

void input() {
    cin >> type;
    if (type != "all" && type != "empty") cin >> x;
}

void func() {
    if (type == "add") nums[x] = true;
    else if (type == "remove") nums[x] = false;
    else if (type == "check") nums[x] ? cout << "1\n" : cout << "0\n";
    else if (type == "toggle") nums[x] = !nums[x];
    else if (type == "all") nums.assign(21, true);
    else if (type == "empty") nums.assign(21, false);
}