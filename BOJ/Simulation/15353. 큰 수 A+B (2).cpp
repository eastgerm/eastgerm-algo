//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <string>
using namespace std;

string a,b;

void input();
void addZero();
void sum();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    addZero();
    sum();
    output();
    return 0;
}

void input() {
    cin >> a >> b;
}
void addZero() {
    int aLen = a.length(), bLen = b.length();
    if(aLen == bLen) return;
    if(aLen < bLen) {
        int sub = bLen-aLen;
        for(int i=0; i<sub; i++) a = "0"+a;
    }
    else {
        int sub = aLen - bLen;
        for(int i=0; i<sub; i++) b = "0"+b;
    }
}
void sum() {
    int len = a.length();
    int carry = 0;
    for(int i=len-1; i>=0; i--) {
        int aN = a[i]-'0', bN = b[i]-'0';
        int newN = aN + bN + carry;
        if(newN < 10) {
            b[i] = newN + '0';
            carry = 0;
        }
        else {
            b[i] = newN%10 + '0';
            carry = 1;
        }
    }
    if(carry) b = "1" + b;
}
void output() {
    cout << b << '\n';
}