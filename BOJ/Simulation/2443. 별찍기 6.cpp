//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <string>
using namespace std;

int N;

void input();
void space(int n);
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
void space(int n) {
    string norm = " ";
    string s = "";
    for(int i=1; i<=n; i++) s += norm;
    cout << s;
}
void star(int n) {
    string norm = "*";
    string s = "";
    for(int i=1; i<=n ;i++) s += norm;
    cout << s << '\n';
}
void output() {
    for(int i=1; i<=N; i++) space(i-1), star(2*(N-i)+1);
}