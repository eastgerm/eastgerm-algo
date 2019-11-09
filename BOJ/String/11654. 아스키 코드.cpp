//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

char c;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> c;
}
void output() {
    cout << (int)c << '\n';
}