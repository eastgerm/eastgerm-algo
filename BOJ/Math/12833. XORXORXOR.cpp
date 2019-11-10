//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int A,B,C;

void input();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B >> C;
}

void output() {
    int ans = A ^ B;
    for(int i=0; i<C-1; i++) ans ^= B;
    cout << ans << '\n';
}