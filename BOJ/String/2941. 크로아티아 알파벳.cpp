//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
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
    int ans = 0;
    int len = s.length();
    for(int i=0; i<len; ) {
        if(s[i] == 'c') {
            if(i < len-1) {
                if(s[i+1] == '=' || s[i+1] == '-') ans++, i+=2;
                else ans++, i++;
            }
            else ans++, i++;
        }
        else if(s[i] == 'd' ) {
            if(i < len-2) {
                if(s[i+1] == 'z' && s[i+2] == '=') ans++, i+=3;
                else if(s[i+1] == '-') ans++, i+=2;
                else ans++, i++;
            }
            else if(i < len-1) {
                if(s[i+1] == '-') ans++, i+=2;
                else ans++, i++;
            }
            else ans++, i++;
        }
        else if(s[i] == 'l') {
            if(i < len-1) {
                if(s[i+1] == 'j') ans++, i+=2;
                else ans++, i++;
            }
            else ans++, i++;
        }
        else if(s[i] == 'n') {
            if(i < len-1) {
                if(s[i+1] == 'j') ans++, i+=2;
                else ans++, i++;
            }
            else ans++, i++;
        }
        else if(s[i] == 's') {
            if(i < len-1) {
                if(s[i+1] == '=') ans++, i+=2;
                else ans++, i++;
            }
            else ans++, i++;
        }
        else if(s[i] == 'z') {
            if(i < len-1) {
                if(s[i+1] == '=') ans++, i+=2;
                else ans++, i++;
            }
            else ans++, i++;
        }
        else ans++, i++;
    }
    return ans;
}
void output() {
    cout << count() << '\n';
}