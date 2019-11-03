//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

void func();

int main() {
    func();
    return 0;
}

void func() {
    long long N, M;
    cin >> N >> M;
    long long ans = N > M ? N - M : M - N;
    cout << ans << '\n';
}