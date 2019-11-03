//
// Created by kimdong on 2019-05-03.
//

#include <iostream>
using namespace std;

int N;

void input();
void output();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N;
}
void output(){
    for(int i=1; i<=N; i++) cout << i << '\n';
}