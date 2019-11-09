//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        int p; cin >> p;
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            int a,b; cin >> a >> b;
            p += a*b;
        }
        cout << p << '\n';
    }
    return 0;
}