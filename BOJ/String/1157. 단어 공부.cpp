//
// Created by kimdong on 2019-05-16.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;
vector<int> cnt(26,0);

void input();
char voca();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> s;
}
char voca() {
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') cnt[s[i]-'a']++;
        else cnt[s[i]-'A']++;
    }
    int max = -1;
    char ans;
    for(int i=0; i<26; i++) {
        if(max < cnt[i]) max = cnt[i], ans = i + 'A';
        else if(max == cnt[i]) ans = '?';
    }
    return ans;
}
void output() {
    cout << voca() << '\n';
}