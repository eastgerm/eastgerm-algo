//
// Created by kimdong on 2019-11-16.
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
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;
        if (!a && !b && !c) return;
        if (c - b == b - a) cout << "AP " << 2 * c - b << '\n';
        else cout << "GP " << c * c / b << '\n';
    }
}