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
    int ans = 2;
    int nowD = 2;
    bool change = false;
    for (int i = 1; i < N; i++) {
        ans += nowD;
        if (!change) change = true;
        else change = false, nowD++;
    }
    cout << ans << '\n';
}