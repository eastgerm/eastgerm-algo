//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <string>
using namespace std;

string s;
int A,B;

int _stoi(string num) {
    int len = num.length();
    int ans = 0;
    int now10 = 1;
    for(int i=len-1; i>=0; i--) ans += (num[i]-'0')*now10, now10 *= 10;
    return ans;
}
void input();
void makeAB();
void diet();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    makeAB();
    diet();
    output();
    return 0;
}

void input() {
    cin >> s;
}
void makeAB() {
    int len = s.length();
    int idx  = 0;
    for(int i=0; ;i++)
        if(s[i] == ':') {
            idx = i;
            break;
        }
    A = _stoi(s.substr(0,idx));
    B = _stoi(s.substr(idx+1,len-1-idx));
}
void diet() {
    int small = A < B ? A : B;
    int large = A > B ? A : B;
    if(large%small == 0) {
        A /= small;
        B /= small;
        return;
    }
    for(int i=small/2; i>=1; i--) {
        if(A%i == 0 && B%i == 0) {
            A /= i;
            B /= i;
            return;
        }
    }
}
void output() {
    cout << A << ':' << B << '\n';
}