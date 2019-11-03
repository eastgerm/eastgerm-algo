//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string N;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
}
int result(){
    int total = 0;
    int numN = 0;
    int digit = N.length();
    for(int i=0; i<digit; i++) numN += (N[i]-'0') * pow(10,digit-1-i);
    for(int i=1; i<digit; i++) total += (9 * pow(10,i-1) * i);
    total += (numN - pow(10,digit-1) + 1) * digit;
    return total;
}
void output(){
    cout << result() << '\n';
}