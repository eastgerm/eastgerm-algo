//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
using namespace std;

int N;

void input();
void print(int n);
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
void print(int n) {
    string text;
    string norm = "* ";
    string midNorm = "  ";
    for(int i=0; i<n; i++) i == 0 || i == n-1 ? text += norm : text += midNorm;
    for(int i=0; i<N-n; i++) text = " " + text;
    cout << text + "\n";
}
void output() {
    for(int i=1; i<=N; i++) print(i);
}