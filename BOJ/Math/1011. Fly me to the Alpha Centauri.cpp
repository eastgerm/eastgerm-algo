//
// Created by kimdong on 2019-11-11.
//

#include <iostream>
#include <vector>

using namespace std;

int T;
vector<long long> dp(1, 0);
long long x, y;

void inputT();

void fillDp();

void input();

long long fly();

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
    fillDp();
}

void fillDp() {
    for (long long i = 1;; i++) {
        long long value = dp[i - 1] + (i + 1) / 2;
        dp.push_back(value);
        if (value > 2147483647) break;
    }
}

void input() {
    cin >> x >> y;
}

long long fly() {
    long long dist = y - x;
    for (long long i = 1;; i++) {
        if (dist > dp[i]) continue;
        return i;
    }
}

void output() {
    cout << fly() << '\n';
}