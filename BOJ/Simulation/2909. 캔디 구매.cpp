//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <math.h>
using namespace std;

int C,K;

void input();
int result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> C >> K;
}
int result() {
    int bill = pow(10,K);
    return C%bill >= bill/2 ? (C/bill)*bill + bill : (C/bill)*bill;
}
void output() {
    cout << result() << '\n';
}