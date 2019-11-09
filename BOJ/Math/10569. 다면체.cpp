//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        int a,b; cin >> a >> b;
        cout << 2 + b - a << '\n';
    }
    return 0;
}