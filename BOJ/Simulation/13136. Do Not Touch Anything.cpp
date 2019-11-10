//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    long long R, C, N;
    cin >> R >> C >> N;
    long long row = R % N == 0 ? R / N : R / N + 1;
    long long col = C % N == 0 ? C / N : C / N + 1;
    cout << row * col << '\n';
    return 0;
}