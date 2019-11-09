//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        int sum = 0;
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            int a; cin >> a, sum += a;
        }
        cout << sum << '\n';
    }
    return 0;
}