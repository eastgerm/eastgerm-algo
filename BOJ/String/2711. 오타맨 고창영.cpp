//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
using namespace std;

int T;
int idx;
string s;

void inputT();
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input(){
    cin >> idx >> s;
}
void output() {
    int len = s.length();
    cout << s.substr(0,idx-1) + s.substr(idx,len) + "\n";
}