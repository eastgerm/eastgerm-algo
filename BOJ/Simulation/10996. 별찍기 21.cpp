//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
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
    string norm1 = "*", norm2 =" ";
    string text1,text2;
    for(int i=0; i<N; i++) i%2 == 0 ? (text1 += norm1, text2 += norm2) : (text1 += norm2, text2 += norm1);
    for(int i=0; i<N; i++) cout << text1 << '\n' << text2 << '\n';
}