//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <string>
using namespace std;

string s;

void input();
int voca();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    getline(cin,s);
}
int voca() {
    int ans = 0;
    int len = s.length();
    for(int i=0; i<len; i++) if((i==0 && s[i]!=' ') || (s[i-1]==' ' && s[i] != ' ')) ans++;
    return ans;
}
void output() {
    cout << voca() << '\n';
}