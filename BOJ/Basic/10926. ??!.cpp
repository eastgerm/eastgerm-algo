//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
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
void output() {
    cout << s+"??!\n";
}