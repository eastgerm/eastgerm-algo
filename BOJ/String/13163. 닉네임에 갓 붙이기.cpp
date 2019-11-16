//
// Created by kimdong on 2019-11-17.
//

#include <iostream>
#include <string>

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
    cin.ignore();
    for (int tc = 0; tc < T; tc++) {
        string s;
        getline(cin, s);
        string res = "god";
        int len = s.length();
        bool notYet = true;
        for (int i = 0; i < len; i++) {
            if (s[i] == ' ') notYet = false;
            if (notYet) continue;
            if (s[i] != ' ') {
                res += s[i];
            }
        }
        cout << res << '\n';
    }
}