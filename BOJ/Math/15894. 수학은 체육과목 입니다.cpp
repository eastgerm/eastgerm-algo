//
// Created by kimdong on 2019-07-11.
//

#include <iostream>
using namespace std;

long N;

void input();
long result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
long result() {
    return 4*N;
}
void output() {
    cout << result() << '\n';
}