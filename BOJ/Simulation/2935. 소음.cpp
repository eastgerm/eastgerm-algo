//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <string>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

string A,B;
char oper;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    cin >> A >> oper >> B;
}
void output(){
    int aLen = A.length(), bLen = B.length();
    int sumLen = aLen + bLen;
    int digit = MAX(aLen,bLen);
    int minDigit = sumLen - digit;

    if(oper == '+') {
        for(int i=0; i<digit; i++){
            if(i == 0){
                if(digit == minDigit) cout << 2;
                else cout << 1;
            }
            else if(i == digit-minDigit) cout << 1;
            else cout << 0;
        }
        return ;
    }
    for(int i=0; i<sumLen-1; i++) i == 0 ? cout << 1 : cout << 0;
    cout << '\n';
}