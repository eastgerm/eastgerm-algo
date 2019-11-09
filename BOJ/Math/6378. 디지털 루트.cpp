//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <string>
using namespace std;

string N;

void func();
void input();
int digital();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while(true) {
        input();
        if(N == "0") return;
        output();
    }
}
void input() {
    cin >> N;
}
int digital() {
    int sum = 0;
    int len = N.length();
    for(int i=0; i<len; i++) sum += (N[i]-'0');
    if(sum < 10) return sum;
    while(sum >= 10) {
        int temp = sum;
        int newSum = 0;
        while(temp > 0) {
            newSum += temp%10;
            temp /= 10;
        }
        sum = newSum;
    }
    return sum;
}
void output() {
    cout << digital() << '\n';
}