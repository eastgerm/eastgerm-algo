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
    int ans = N % 5 == 0 ? N / 5 : N / 5 + 1;
    cout << ans << '\n';
}