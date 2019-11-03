//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string X,Y;

void input();
void rev();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    rev();
    return 0;
}

void input(){
    cin >> X >> Y;
}
void rev(){
    int xLen = X.length(),yLen = Y.length();
    int numX = 0, numY = 0;
    for(int i=0; i<xLen; i++) numX += (X[i]-'0')*pow(10,i);
    for(int i=0; i<yLen; i++) numY += (Y[i]-'0')*pow(10,i);
    int temp = numX + numY;
    bool zero = true;
    while(temp){
        if(zero && temp%10 == 0) temp/=10;
        else {
            zero = false;
            cout << temp % 10;
            temp /= 10;
        }
    }
    cout << '\n';
}
