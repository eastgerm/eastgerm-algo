//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int T;
int A, B;

void inputT();

void input();

void output();

int main() {
    inputT();
    for (int tc = 1; tc <= T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}

void input() {
    cin >> A >> B;
}

void output() {
    cout << (A / B) * (A / B) << '\n';
}