//
// Created by kimdong on 2019-07-03.
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
    int N; cin >> N;
    int M;
    while(true) {
        cin >> M;
        if(M == 0) return;
        cout << M;
        M%N == 0 ? cout << " is a multiple of " : cout << " is NOT a multiple of ";
        cout << N << ".\n";
    }
}