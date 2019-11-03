//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

int N;

void input();
void googoo(int n,int i);
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
void googoo(int n,int i) {
    cout << n << " * " << i << " = " << n*i << '\n';
}
void output() {
    for(int i=1; i<=9; i++) googoo(N,i);
}