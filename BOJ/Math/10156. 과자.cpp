//
// Created by kimdong on 2019-05-30.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int k,n,m;
    cin >> k >> n >> m;
    int res = k*n - m;
    res > 0 ? cout << res : cout << 0;
    cout << '\n';
    return 0;
}