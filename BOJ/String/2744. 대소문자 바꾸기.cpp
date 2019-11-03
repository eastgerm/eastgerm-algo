//
// Created by kimdong on 2019-05-24.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
void change();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    change();
    output();
    return 0;
}

void input() {
    cin >> s;
}
void change() {
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i]>='A' && s[i]<='Z') s[i] = s[i] - 'A' + 'a';
        else s[i] = s[i] - 'a' + 'A';
    }
}
void output() {
    cout << s << '\n';
}