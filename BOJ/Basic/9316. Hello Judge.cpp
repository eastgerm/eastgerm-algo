//
// Created by kimdong on 2019-06-02.
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
    for(int i=1; i<=N; i++) cout << "Hello World, Judge " << i <<"!\n";
}