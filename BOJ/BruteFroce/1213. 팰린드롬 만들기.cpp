//
// Created by kimdong on 2019-06-24.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string name;

string ctos(char c) {
    string temp = " ";
    temp[0] = c;
    return temp;
};
void input();
string hansoo();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> name;
}
string hansoo() {
    string ans;
    int len = name.length();
    vector<int> cnt(26,0);
    for(int i=0; i<len; i++) cnt[name[i]-'A']++;
    if(len%2 == 0) {
        for(int i=0; i<26; i++) {
            if(cnt[i]) {
                if(cnt[i]%2 == 1) return "I'm Sorry Hansoo";
                for(int j=0; j<cnt[i]/2; j++) ans += ctos(i+'A');
            }
        }
        int newLen = ans.length();
        for(int i=newLen-1; i>=0; i--) ans += ctos(ans[i]);
    }
    else {
        bool odd = false;
        char center = ' ';
        for(int i=0; i<26; i++) {
            if(cnt[i]) {
                if(cnt[i]%2 == 1) {
                    if(odd) return "I'm Sorry Hansoo";
                    center = i+'A';
                    odd = true;
                }
                for(int j=0; j<cnt[i]/2; j++) ans += ctos(i+'A');
            }
        }
        ans += ctos(center);
        int newLen = ans.length();
        for(int i=newLen-2; i>=0; i--) ans += ctos(ans[i]);
    }
    return ans;
}
void output() {
    cout << hansoo()+'\n';
}