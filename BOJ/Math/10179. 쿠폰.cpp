//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        double price;
        cin >> price;
        cout << fixed;
        cout.precision(2);
        cout << '$' << price * 0.8 << '\n';
    }
    return 0;
}