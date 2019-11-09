//
// Created by kimdong on 2019-06-02.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while(1) {
        getline(cin,s);
        if (s == "END") return;
        int len = s.length();
        for (int i=len-1; i>=0; i--) cout << s[i];
        cout << '\n';
    }
}