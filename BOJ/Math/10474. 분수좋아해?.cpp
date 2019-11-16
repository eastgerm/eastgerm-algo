//
// Created by kimdong on 2019-11-16.
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
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) return;
        int head = a / b;
        int tail = a % b;
        cout << head << ' ' << tail << " / " << b << '\n';
    }
}