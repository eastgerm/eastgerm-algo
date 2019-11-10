//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int x, y, z;
    int a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    cout << a - z << ' ' << b / y << ' ' << c - x << '\n';
    return 0;
}