//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int N;

void func();

int main() {
    func();
    return 0;
}

void func() {
    cin >> N;
    int ans;
    int now = 1;
    for (ans = 1; N > 0; ans++) {
        if (N < now) now = 1, ans--;
        else N -= now++;
    }
    cout << --ans << '\n';
}