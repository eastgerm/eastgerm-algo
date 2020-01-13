//
// Created by kimdong on 2020-01-10.
//

#include <iostream>

using namespace std;

int Q;
int a;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> a;
        int result = a & (-a);
        cout << (a == result ? '1' : '0') << '\n';
    }
}
