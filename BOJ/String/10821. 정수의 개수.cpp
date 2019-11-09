//
// Created by kimdong on 2019-05-24.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
int count();
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
int count() {
    int ans = 1;
    int len = s.length();
    for(int i=0; i<len; i++) if(s[i] == ',') ans++;
    return ans;
}
void output() {
    cout << count() << '\n';
}