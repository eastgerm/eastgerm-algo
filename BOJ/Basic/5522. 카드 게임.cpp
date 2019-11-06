//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int sum = 0;
    for(int i=0; i<5; i++) {
        int n; cin >> n;
        sum += n;
    }
    cout << sum << '\n';
    return 0;
}