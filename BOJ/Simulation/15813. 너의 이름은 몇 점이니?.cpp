//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>

using namespace std;

int N;
string s;

int main() {
    cin >> N >> s;
    int ans = 0;
    int len = s.length();
    for(int i=0; i<len; i++) ans += s[i] - 'A' + 1;
    cout << ans << '\n';
    return 0;
}