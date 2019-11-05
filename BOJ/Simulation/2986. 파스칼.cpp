//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
using namespace std;

int N;

void input();
int counter();
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
int counter() {
    for(int i=2; i*i <= N ;i++) if(N%i == 0) return N - N/i;
    return N-1;
}
void output() {
    cout << counter() << '\n';
}