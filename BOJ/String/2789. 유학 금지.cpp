//
// Created by kimdong on 2019-06-25.
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

void input() {
    cin >> s;
}
void output() {
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i] == 'C') continue;
        if(s[i] == 'A') continue;
        if(s[i] == 'M') continue;
        if(s[i] == 'B') continue;
        if(s[i] == 'R') continue;
        if(s[i] == 'I') continue;
        if(s[i] == 'D') continue;
        if(s[i] == 'G') continue;
        if(s[i] == 'E') continue;
        cout << s[i];
    }
    cout << '\n';
}