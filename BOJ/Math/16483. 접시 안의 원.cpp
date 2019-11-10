//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    double n;
    cin >> n;
    n /= 2;
    int n10 = (int) (n * n * 10);
    if (n10 % 10 >= 5) cout << n10 / 10 + 1 << '\n';
    else cout << n10 / 10 << '\n';
    return 0;
}