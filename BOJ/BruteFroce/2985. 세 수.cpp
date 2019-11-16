//
// Created by kimdong on 2019-11-17.
//

#include <iostream>
#include <string>

using namespace std;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c) {
        cout << a << '+' << b << '=' << c << '\n';
        return;
    }
    if (a - b == c) {
        cout << a << '-' << b << '=' << c << '\n';
        return;
    }
    if (a * b == c) {
        cout << a << '*' << b << '=' << c << '\n';
        return;
    }
    if (a / b == c) {
        cout << a << '/' << b << '=' << c << '\n';
        return;
    }
    if (a == b + c) {
        cout << a << '=' << b << '+' << c << '\n';
        return;
    }
    if (a == b - c) {
        cout << a << '=' << b << '-' << c << '\n';
        return;
    }
    if (a == b * c) {
        cout << a << '=' << b << '*' << c << '\n';
        return;
    }
    if (a == b / c) {
        cout << a << '=' << b << '/' << c << '\n';
        return;
    }
}