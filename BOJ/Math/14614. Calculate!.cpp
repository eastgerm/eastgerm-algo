//
// Created by kimdong on 2019-08-28.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int a, b;
    string c;
    cin >> a >> b >> c;
    int odd = a ^b, even = odd ^b;
    int res = (c[c.length() - 1] - '0') % 2 == 0 ? even : odd;
    cout << res << '\n';
    return 0;
}