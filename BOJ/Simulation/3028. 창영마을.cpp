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
    int cups[3] = {1, 0, 0};
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            int temp = cups[0];
            cups[0] = cups[1];
            cups[1] = temp;
        } else if (s[i] == 'B') {
            int temp = cups[2];
            cups[2] = cups[1];
            cups[1] = temp;
        } else {
            int temp = cups[0];
            cups[0] = cups[2];
            cups[2] = temp;
        }
    }
    for (int i = 0; i < 3; i++)
        if (cups[i] == 1) cout << i + 1 << '\n';
    return 0;
}