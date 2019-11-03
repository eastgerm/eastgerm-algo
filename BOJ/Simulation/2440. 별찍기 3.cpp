//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

int N;

void input();
void star(int n);
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
void star(int n) {
    for(int i=0; i<n; i++) cout << '*';
    cout << '\n';
}
void output() {
    for(int i=N; i>0; i--) star(i);
}