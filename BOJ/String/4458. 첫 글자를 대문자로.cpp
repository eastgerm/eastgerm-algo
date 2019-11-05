//
// Created by kimdong on 2019-08-04.
//

#include <iostream>
#include <string>
using namespace std;

int T;

void inputT();
void input();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int i=0; i<T; i++) input();
    return 0;
}

void inputT() {
    cin >> T;
    cin.ignore();
}
void input() {
    string s;
    getline(cin,s);
    if(s[0] >= 'a' && s[0] <= 'z') s[0] += (-'a'+'A');
    cout << s << '\n';
}