//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin >> s;
    if (s.length() == 2) cout << (s[0] - '0') + (s[1] - '0') << '\n';
    else if (s.length() == 4) cout << "20\n";
    else if (s[1] == '0') cout << 10 + (s[2] - '0') << '\n';
    else cout << (s[0] - '0') + 10 << '\n';
    return 0;
}