//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;

void func();
void input();
string yesNo();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while(true) {
        input();
        if(s == ".") return;
        output();
    }
}
void input() {
    getline(cin,s);
}
string yesNo() {
    vector<char> bowl;
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i] == '(') bowl.push_back('(');
        if(s[i] == ')') {
            if(bowl.empty() || bowl[bowl.size()-1] != '(') return "no";
            bowl.pop_back();
        }
        if(s[i] == '[') bowl.push_back('[');
        if(s[i] == ']') {
            if(bowl.empty() || bowl[bowl.size()-1] != '[') return "no";
            bowl.pop_back();
        }
        if(i == len-1) {
            if(bowl.empty()) return "yes";
            return "no";
        }
    }
}
void output() {
    cout << yesNo() << '\n';
}