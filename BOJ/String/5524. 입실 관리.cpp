//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>

using namespace std;

int N;
string s;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s;
        int len = s.length();
        for (int j = 0; j < len; j++)
            if (s[j] >= 'A' && s[j] <= 'Z') s[j] -= 'A' - 'a';
        cout << s << '\n';
    }
    return 0;
}