//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

long long A, B;

void func();

int main() {
    func();
    return 0;
}

void func() {
    cin >> A >> B;
    long long N = A < B ? B - A + 1 : A - B + 1;
    cout << N * (A + B) / 2 << '\n';
}