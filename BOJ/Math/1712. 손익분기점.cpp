//
// Created by kimdong on 2019-08-19.
//

#include <iostream>

using namespace std;

long long A, B, C;

void input();

long long breakPoint();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B >> C;
}

long long breakPoint() {
    long long margin = C - B;
    if (margin <= 0) return -1;
    return A / margin + 1;
}

void output() {
    cout << breakPoint() << '\n';
}