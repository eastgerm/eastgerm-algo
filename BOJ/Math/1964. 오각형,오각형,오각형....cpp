//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    long long n;
    cin >> n;
    cout << (3 * n * (n - 1) / 2 + 4 * n + 1)%45678 << '\n';
    return 0;
}