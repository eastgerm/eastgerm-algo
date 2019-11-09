//
// Created by kimdong on 2019-05-26.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
int dial();
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
int dial() {
    int ans = 0;
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i]>='A' && s[i] <= 'C') ans += 3;
        else if(s[i]>='D' && s[i] <= 'F') ans += 4;
        else if(s[i]>='G' && s[i] <= 'I') ans += 5;
        else if(s[i]>='J' && s[i] <= 'L') ans += 6;
        else if(s[i]>='M' && s[i] <= 'O') ans += 7;
        else if(s[i]>='P' && s[i] <= 'S') ans += 8;
        else if(s[i]>='T' && s[i] <= 'V') ans += 9;
        else ans += 10;
    }
    return ans;
}
void output() {
    cout << dial() << '\n';
}