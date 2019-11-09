//
// Created by kimdong on 2019-05-29.
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

void input() { cin >> N; }
void output() {
    N%2 ? cout << "SK" : cout << "CY";
    cout << '\n';
}