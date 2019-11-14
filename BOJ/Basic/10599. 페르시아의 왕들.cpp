//
// Created by kimdong on 2019-11-14.
//

#include <iostream>

using namespace std;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while (true) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0) return;
        cout << c - b << ' ' << d - a << '\n';
    }
}