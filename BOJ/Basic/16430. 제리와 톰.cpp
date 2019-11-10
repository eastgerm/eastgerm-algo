//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int A,B;

void input();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B;
}

void output() {
    cout << B-A << ' ' << B << '\n';
}