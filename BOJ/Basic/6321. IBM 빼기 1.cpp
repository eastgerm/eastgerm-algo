//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <string>
using namespace std;

int N;
string s;

void inputN();
void input();
void IBM();
void output(int n);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputN();
    for(int i=1; i<=N; i++) {
        input();
        IBM();
        output(i);
    }
    return 0;
}

void inputN() {
    cin >> N;
}
void input() {
    cin >> s;
}
void IBM() {
    int len = s.length();
    for(int i=0; i<len; i++) {
        char temp = (s[i]-'A'+1)%26;
        s[i] = temp + 'A';
    }
}
void output(int n) {
    cout << "String #" << n << '\n';
    cout << s << "\n\n";
}