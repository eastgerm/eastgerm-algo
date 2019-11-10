//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <math.h>
using namespace std;

int func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cout << func() << '\n';
    return 0;
}

int func() {
    double N; cin >> N;
    if(N == 1) return 1;
    double res = log2(N);
    while(true) {
        res -= 1;
        if(res == 0) return 1;
        if(res < 0) return 0;
    }
}