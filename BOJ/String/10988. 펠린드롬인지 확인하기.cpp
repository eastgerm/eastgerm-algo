//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
bool fellin();
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
bool fellin() {
    int len = s.length();
    int middle = (len-1)/2;
    for(int i=0; len%2 ? i<middle : i<=middle; i++) if(s[i] != s[len-1-i]) return false;
    return true;
}
void output() {
    cout << fellin() << '\n';
}