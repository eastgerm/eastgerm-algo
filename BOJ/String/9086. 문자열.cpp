//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        string s; cin >> s;
        cout << s[0] << s[s.length()-1] << '\n';
    }
    return 0;
}