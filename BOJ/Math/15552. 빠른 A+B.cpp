//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

int T;
int a,b;

void inputT();
void input();
void star(int n);
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> a >> b;
}
void output() {
    cout << a+b << '\n';
}