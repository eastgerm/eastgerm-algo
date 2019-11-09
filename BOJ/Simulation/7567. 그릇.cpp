//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int sum = 0;
    for(int i=0; i<len; i++) {
        if(i == 0) sum += 10;
        else if(s[i-1] == s[i]) sum += 5;
        else sum += 10;
    }
    cout << sum << '\n';
    return 0;
}