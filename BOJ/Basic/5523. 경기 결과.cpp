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
    int T;
    cin >> T;
    int a = 0, b = 0;
    int r1, r2;
    for (int tc = 0; tc < T; tc++) {
        cin >> r1 >> r2;
        if (r1 == r2) continue;
        r1 > r2 ? a++ : b++;
    }
    cout << a << ' ' << b << '\n';
}