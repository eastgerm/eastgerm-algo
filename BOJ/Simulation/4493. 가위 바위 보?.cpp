//
// Created by kimdong on 2019-11-17.
//

#include <iostream>

using namespace std;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        int N;
        cin >> N;
        int p1 = 0, p2 = 0;
        for (int i = 0; i < N; i++) {
            char a, b;
            cin >> a >> b;
            if (a == b) continue;

            if (a == 'R' && b == 'S') p1++;
            else if (a == 'S' && b == 'P') p1++;
            else if (a == 'P' && b == 'R') p1++;
            else p2++;
        }
        if (p1 == p2) cout << "TIE\n";
        else if (p1 > p2) cout << "Player 1\n";
        else cout << "Player 2\n";
    }
}