//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string N;

void input();
int change10();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
int change10() {
    int sum = 0;
    int len = N.length();
    for(int i=0; i<len; i++)
        N[i]>='0' && N[i]<='9' ? sum += (N[i]-'0') * pow(16,len-i-1) : sum += (N[i]-'A'+10) * pow(16,len-i-1);
    return sum;
}
void output() {
    cout << change10() << '\n';
}