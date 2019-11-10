//
// Created by kimdong on 2019-05-17.
//

#include <iostream>
#include <string>
using namespace std;

int N;
string s;

void input();
string check();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> s;
}
string check() {
    for(int i=1; i < 2*N; i++) {
        if(s[i] == s[i-1]) return "No";
        if(i == 2*N - 1) return "Yes";
    }
}
void output() {
    cout << check() << '\n';
}