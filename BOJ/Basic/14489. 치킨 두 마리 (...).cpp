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
    int a, b;
    int c;
    cin >> a >> b >> c;
    int total = a + b;
    int doubleC = 2 * c;
    if (total < doubleC) cout << total << '\n';
    else cout << total - doubleC << '\n';
}