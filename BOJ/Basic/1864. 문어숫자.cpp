//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>

using namespace std;

string cmd;

int octo(char c) {
    if (c == '-') return 0;
    if (c == '(') return 2;
    if (c == '@') return 3;
    if (c == '?') return 4;
    if (c == '>') return 5;
    if (c == '&') return 6;
    if (c == '%') return 7;
    if (c == '/') return -1;
    return 1;
}

void func();

int main() {
    func();
    return 0;
}

void func() {
    while (true) {
        cin >> cmd;
        if (cmd == "#") return;
        int len = cmd.length();
        int ans = 0;
        int now8 = 1;
        for (int i = len - 1; i >= 0; i--) ans += now8 * octo(cmd[i]), now8 *= 8;
        cout << ans << '\n';
    }
}