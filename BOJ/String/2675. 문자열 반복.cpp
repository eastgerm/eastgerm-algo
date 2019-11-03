//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
#include <string>
using namespace std;

int T;
int R;
string s;

void inputT();
void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int i=0; i<T; i++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> R >> s;
}
void output() {
    int len = s.length();
    for(int i=0; i<len; i++)
        for(int r=0; r<R; r++) cout << s[i];
    cout << '\n';
}