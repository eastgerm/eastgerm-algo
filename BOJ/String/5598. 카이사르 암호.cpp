//
// Created by kimdong on 2019-05-30.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() { cin >> s; }
void output() {
    int len = s.length();
    for(int i=0; i<len; i++) cout << (char)((s[i]-'A'-3+26)%26 + 'A');
    cout << '\n';
}