//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

int n;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> n;
}
void output() {
    cout << n*(n+1) / 2 << '\n';
}