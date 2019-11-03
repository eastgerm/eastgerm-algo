//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
using namespace std;

double a,b;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> a >> b;
}
void output() {
    cout << fixed;
    cout.precision(10);
    cout << a/b << '\n';
}