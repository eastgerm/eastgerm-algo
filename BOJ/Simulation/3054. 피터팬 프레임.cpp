//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
#include <string>
using namespace std;

string s;
int len;

void input();
void printLine(int n);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> s;
    len = s.length();
}
void printLine(int n) {
    string text;
    if(n == 0 || n == 4) {
        string pNorm = "..#.";
        string wNorm = "..*.";
        for(int i=0; i<len; i++) i%3 != 2 ? text += pNorm : text += wNorm;
        text += ".\n";
    }
    else if(n == 1 || n == 3) {
        string pNorm = ".#.#";
        string wNorm = ".*.*";
        for(int i=0; i<len; i++) i%3 != 2 ? text += pNorm : text += wNorm;
        text += ".\n";
    }
    else {
        string norm = "#...";
        for(int i=0; i<len; i++) text += norm;
        text += "#";
        for(int i=0; i<len; i++) {
            text[4*i + 2] = s[i];
            if(i%3 == 2) {
                text[4*i] = '*';
                text[4*i + 4] = '*';
            }
        }
        text += "\n";
    }
    cout << text;
}
void output() {
    for(int i=0; i<5; i++) printLine(i);
}