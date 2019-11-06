//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << '#';
                else cout << 'J';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}