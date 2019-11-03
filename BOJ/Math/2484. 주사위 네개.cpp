//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> res(4, 0);
int ans;

void input();

int dice();

void output();

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        input();
        int now = dice();
        if (now > ans) ans = now;
    }
    output();
    return 0;
}

void input() {
    cin >> res[0] >> res[1] >> res[2] >> res[3];
}

int dice() {
    sort(res.begin(), res.end());
    if (res[0] == res[3]) return 50000 + res[0] * 5000;
    if (res[0] == res[2] || res[1] == res[3]) return 10000 + res[1] * 1000;
    if (res[0] == res[1] && res[2] == res[3]) return 2000 + (res[0] + res[2]) * 500;
    if (res[0] == res[1]) return 1000 + res[0] * 100;
    if (res[1] == res[2]) return 1000 + res[1] * 100;
    if (res[2] == res[3]) return 1000 + res[2] * 100;
    return res[3] * 100;
}

void output() {
    cout << ans << '\n';
}