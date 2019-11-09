//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    int res[5] = {0};
    for (int tc = 0; tc < T; tc++) {
        int x, y;
        cin >> x >> y;
        if (x == 0 || y == 0) res[0]++;
        else if (x > 0 && y > 0) res[1]++;
        else if (x < 0 && y > 0) res[2]++;
        else if (x < 0 && y < 0) res[3]++;
        else res[4]++;
    }
    for (int i = 1; i <= 4; i++) cout << 'Q' << i << ": " << res[i] << '\n';
    cout << "AXIS: " << res[0] << '\n';
    return 0;
}