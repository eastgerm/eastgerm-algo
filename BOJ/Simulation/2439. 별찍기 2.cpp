//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

int N;

void input();
void star(int total, int n);
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
void star(int total, int n) {
    for(int i=1; i<=total; i++) i <= total-n ? cout << ' ' : cout << '*';
    cout << '\n';
}
void output() {
    for(int i=1; i<=N; i++) star(N,i);
}