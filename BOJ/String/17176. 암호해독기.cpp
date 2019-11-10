//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N;
vector<int> password;
vector<int> s_int;
string s;

void input();
char result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    password.assign(N,0);
    for(int i=0; i<N; i++) cin >> password[i];
    cin.ignore();
    getline(cin,s);
}
char result() {
    int len = s.length();
    if(len != N) return 'n';
    for(int i=0; i<len; i++) {
        int word;
        if(s[i] == ' ') word = 0;
        else if(s[i] >= 'A' && s[i] <= 'Z') word = (int)s[i]-64;
        else word = (int)s[i]-70;
        s_int.push_back(word);
    }
    sort(s_int.begin(),s_int.end());
    sort(password.begin(),password.end());
    for(int i=0; i<N; i++) {
        if(s_int[i] != password[i]) return 'n';
        if(i == N-1) return 'y';
    }
}
void output() {
    cout << result() << '\n';
}