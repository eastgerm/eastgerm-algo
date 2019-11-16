//
// Created by kimdong on 2019-11-16.
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
    for (int tc = 0; tc < T; tc++) {
        string s;
        cin >> s;
        int mid = s.length() / 2;
        if (s[mid - 1] == s[mid]) cout << "Do-it\n";
        else cout << "Do-it-Not\n";
    }
}