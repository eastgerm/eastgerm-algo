//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    string s; cin >> s;
    int ans = 0;
    int len = s.length();
    for(int i=0; i<len; i++)
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            ans++;
    cout << ans << '\n';
    return 0;
}