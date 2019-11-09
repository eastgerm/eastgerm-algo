//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int chang = 100, sang = 100;
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        int c,s; cin >> c >> s;
        if(c < s) chang -= s;
        else if(s < c) sang -= c;
    }
    cout << chang << '\n' << sang << '\n';
    return 0;
}