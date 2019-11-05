//
// Created by kimdong on 2019-08-15.
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
    cout << (N + 2) * N * (N + 1) / 2 << '\n';
}