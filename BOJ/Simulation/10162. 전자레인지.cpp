//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
using namespace std;

int N;

void input();
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
void output() {
    if(N%10) {
        cout << -1 << '\n';
        return;
    }
    cout << N/ 300 << ' ';
    N %= 300;
    cout << N/ 60 << ' ';
    N %= 60;
    cout << N/ 10 << '\n';
}