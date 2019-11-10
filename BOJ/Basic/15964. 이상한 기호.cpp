//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

long long func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cout << func() << '\n';
    return 0;
}

long long func() {
    long long a,b; cin >> a >> b;
    return a*a - b*b;
}