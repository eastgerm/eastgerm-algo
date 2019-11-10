//
// Created by kimdong on 2019-07-14.
//

#include <iostream>
#include <string>
using namespace std;

int N,R,C;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> R >> C;
    R--, C--;
}
void output() {
    string norm1 = "v";
    string norm2 = ".";
    string row1,row2;
    for(int i=0; i<N; i++) i%2 == 0 ? (row1 += norm1, row2+= norm2) : (row1 += norm2, row2+= norm1);
    if(C%2 == 0) {
        for(int i=0; i<N; i++) i%2 == R%2 ? cout << row1+"\n" : cout << row2+"\n";
        return;
    }
    for(int i=0; i<N; i++) i%2 == R%2 ? cout << row2+"\n" : cout << row1+"\n";
}