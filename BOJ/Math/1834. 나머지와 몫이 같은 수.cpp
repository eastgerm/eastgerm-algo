//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

long long N;

void func();

int main() {
    func();
    return 0;
}

void func() {
    cin >> N;
    long long ans = 0;
    for (long long i = 1; i < N; i++) ans += i * N + i;
    cout << ans << '\n';
}