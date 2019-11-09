//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

void input();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    return 0;
}

void input() {
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        int a,b; cin >> a >> b;
        cout << 2*b-a << ' ' << a-b << '\n';
    }
}