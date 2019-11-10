//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

int func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cout << func() << '\n';
    return 0;
}

int func() {
    int N; cin >> N;
    return N - 1946;
}