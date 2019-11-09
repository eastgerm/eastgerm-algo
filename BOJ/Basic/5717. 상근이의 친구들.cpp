//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

void hihi();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    hihi();
    return 0;
}

void hihi() {
    while(1) {
        int a,b; cin >> a >>b;
        if(!a && !b) return;
        cout << a+b << '\n';
    }
}