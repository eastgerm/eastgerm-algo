//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
using namespace std;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    for(int i=1000; i<=9999; i++) {
        int _10 = 0, _12 = 0, _16 = 0;
        int temp = i;
        while(temp > 0) {
            _10 += temp%10;
            temp /= 10;
        }
        temp = i;
        while(temp > 0) {
            _12 += temp%12;
            temp /= 12;
        }
        temp = i;
        while(temp > 0) {
            _16 += temp%16;
            temp /= 16;
        }
        if(_10 == _12 && _12 == _16) cout << i << '\n';
    }
}