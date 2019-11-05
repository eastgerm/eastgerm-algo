//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        string s1, s2;
        cin >> s1 >> s2;
        int ans = 0;
        int len = s1.length();
        for (int i = 0; i < len; i++) if (s1[i] != s2[i]) ans++;
        cout << "Hamming distance is " << ans << ".\n";
    }
    return 0;
}