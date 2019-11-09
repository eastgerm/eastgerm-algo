//
// Created by kimdong on 2019-05-14.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string s;

void input();
void result();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    result();
    return 0;
}

void input() {
    cin >> s;
}
void result() {
    int len = s.length();
    vector<string> dic(len,"");
    for(int i=0; i<len; i++) dic[i] = s.substr(i,len);
    sort(dic.begin(),dic.end());
    for(int i=0; i<len; i++) cout << dic[i] << '\n';
}