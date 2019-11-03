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
        int coins[4] = {0};
        int n;
        cin >> n;
        if (n >= 25) coins[0] = n / 25, n %= 25;
        if (n >= 10) coins[1] = n / 10, n %= 10;
        if (n >= 5) coins[2] = n / 5, n %= 5;
        coins[3] = n;
        for (int i = 0; i < 4; i++) cout << coins[i] << ' ';
        cout << '\n';
    }

    return 0;
}