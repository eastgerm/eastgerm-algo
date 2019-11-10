//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int N, M, K;

void input();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M >> K;
}

void output() {
    cout << K / M << ' ' << K % M << '\n';
}