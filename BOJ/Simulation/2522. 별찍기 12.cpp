//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
using namespace std;

int N;

void input();
void star(int n);
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
void star(int n) {
    for(int i=0; i<N; i++) i < N-n ? cout << ' ' : cout << '*';
    cout << '\n';
}
void output() {
    for(int i=1; i<=N; i++) star(i);
    for(int i=N-1; i>0; i--) star(i);
}