//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int N;

void input();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}

void output() {
    int ans = 0;
    for (int i = 2; i <= N - 4; i += 2) {
        int now = N - i;
        for (int j = 1;; j++) {
            int head = j, tail = now - j;
            if (tail - head < 2) break;
            ans++;
        }
    }
    cout << ans << '\n';
}