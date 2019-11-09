//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
using namespace std;

string s;
int joi,ioi;

void input();
void check();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    check();
    output();
    return 0;
}

void input() {
    cin >> s;
}
void check() {
    int len = s.length()-2;
    for(int i=0; i<len; i++) {
        if(s[i] == 'J' && s[i+1] == 'O' && s[i+2] == 'I') joi++;
        else if(s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I') ioi++;
    }
}
void output() {
    cout << joi << '\n' << ioi << '\n';
}