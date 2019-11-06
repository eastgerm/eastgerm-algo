//
// Created by kimdong on 2019-08-20.
//

#include <iostream>
#include <vector>

using namespace std;

int T;
int P, M;

void inputT();

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    inputT();
    for (int tc = 1; tc <= T; tc++) func();
    return 0;
}

void inputT() {
    cin >> T;
}

void func() {
    cin >> P >> M;
    int ans = 0;
    vector<bool> flag(M + 1, false);
    for (int i = 0; i < P; i++) {
        int num;
        cin >> num;
        if (!flag[num]) flag[num] = true;
        else ans++;
    }
    cout << ans << '\n';
}