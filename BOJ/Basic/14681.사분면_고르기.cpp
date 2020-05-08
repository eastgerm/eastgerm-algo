//
// Created by kimdong on 2020-05-08.
//

#include <iostream>

using namespace std;

int x, y;

void input() {
    cin >> x >> y;
}

int calculateQuadrant() {
    if (x * y > 0) {
        if (x > 0) return 1;
        else return 3;
    }
    if (x < 0)return 2;
    return 4;
}

void output() {
    cout << calculateQuadrant() << '\n';
}

int main() {
    input();
    output();
    return 0;
}