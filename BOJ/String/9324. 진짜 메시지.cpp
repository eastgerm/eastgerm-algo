//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int T;
string s;

void inputT();
void input();
string judge();
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
void input() {
    cin >> s;
}
string judge() {
    int len = s.length();
    vector<int> cnt(26,0);
    bool warning = false;
    for(int i=0; i<len; i++) {
        if(warning) {
            if(s[i-1] != s[i]) return "FAKE\n";
            warning = false;
        }
        else {
            cnt[s[i]-'A']++;
            if(cnt[s[i]-'A']%3 == 0) warning = true;
        }
        if(i == len-1 && warning) return "FAKE\n";
    }
    return "OK\n";
}
void output() {
    cout << judge();
}