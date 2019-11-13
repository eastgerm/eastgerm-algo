//
// Created by kimdong on 2019-11-14.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int T;
string num;

void inputT();

void input();

int pretty();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for (int tc = 0; tc < T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}

void input() {
    cin >> num;
}

int pretty() {
    int ans = 0;
    vector<bool> visited(10, false);
    int len = num.length();
    for (int i = 0; i < len; i++) {
        int nowNum = num[i] - '0';
        if (visited[nowNum]) continue;
        ans++;
        visited[nowNum] = true;
    }
    return ans;
}

void output() {
    cout << pretty() << '\n';
}