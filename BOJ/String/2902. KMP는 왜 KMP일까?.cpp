//
// Created by kimdong on 2019-05-14.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    for(int i=0; i<len; i++) if(s[i]>='A' && s[i]<='Z') cout << s[i];
    cout << '\n';
    return 0;
}