//
// Created by kimdong on 2019-08-15.
//

#include <iostream>
#include <string>
using namespace std;

string s1, s2;

void input();
int parseInt(char c);
char parseChar(int n);
int transSec(string s);
string formating(int num);
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> s1 >> s2;
}

int parseInt(char c) {
    return c - '0';
}

char parseChar(int n) {
    return n + '0';
}

int transSec(string s) {
    int res = (parseInt(s[0]) * 10 + parseInt(s[1])) * 3600;
    res += (parseInt(s[3]) * 10 + parseInt(s[4])) * 60;
    res += (parseInt(s[6]) * 10 + parseInt(s[7]));
    return res;
}

string formating(int num) {
    string res = "00:00:00";
    if(num >= 3600) {
        if(num/3600 >= 10) res[0] = parseChar((num/3600)/10), res[1] = parseChar((num/3600)%10);
        else res[1] = parseChar(num/3600);
        num %= 3600;
    }
    if(num >= 60) {
        if(num/60 >= 10) res[3] = parseChar((num/60)/10), res[4] = parseChar((num/60)%10);
        else res[4] = parseChar(num/60);
        num %= 60;
    }
    if(num >= 10) res[6] = parseChar(num/10), res[7] = parseChar(num%10);
    else res[7] = parseChar(num);
    return res;
}

void output() {
    int sec = transSec(s2) - transSec(s1);
    if(sec < 0) sec += 86400;
    cout << formating(sec) << '\n';
}