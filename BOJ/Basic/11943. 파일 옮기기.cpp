//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

void output();
int func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    output();
    return 0;
}

void output() {
    cout << func() << '\n';
}
int func() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    return a+d < b+c ? a+d : b+c;
}