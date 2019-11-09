//
// Created by kimdong on 2019-05-23.
//

#include <iostream>
#include <string>
using namespace std;

int N;

void input();
void space(int n);
void sideStar(int n);
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
void sideStar(int n) {
    string norm = "*";
    string s = "";
    for(int i=1; i<=2*n-1 ;i++) s += norm;
    cout << s << '\n';
}
void star(int n) {
    string starNorm = "* ";
    string spaceNorm = "  ";
    string s = "";
    for(int i=1; i<=n ;i++) i==1 || i ==n ? s += starNorm : s+= spaceNorm;
    cout << s << '\n';
}
void output() {
    for(int i=1; i<=N; i++) space(N-i), i==1 || i==N ? sideStar(i) : star(i);
}