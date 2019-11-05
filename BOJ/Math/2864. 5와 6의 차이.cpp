//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string A,B;
int minRes = 0,maxRes = 0;

void input();
void result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    result();
    output();
    return 0;
}

void input(){
    cin >> A >> B;
}
void result(){
    int nMinA = 0,nMaxA = 0,nMinB = 0,nMaxB = 0;
    string minA = A, maxA = A;
    string minB = B, maxB = B;
    int aLen = A.length(), bLen = B.length();
    for(int i=0; i<aLen; i++) {
        if(A[i] == '5') maxA[i] = '6';
        if(A[i] == '6') minA[i] = '5';
        nMaxA += (maxA[i]-'0')*pow(10,(aLen-1)-i);
        nMinA += (minA[i]-'0')*pow(10,(aLen-1)-i);
    }
    for(int i=0; i<bLen; i++) {
        if(B[i] == '5') maxB[i] = '6';
        if(B[i] == '6') minB[i] = '5';
        nMaxB += (maxB[i]-'0')*pow(10,(bLen-1)-i);
        nMinB += (minB[i]-'0')*pow(10,(bLen-1)-i);
    }
    minRes = nMinA + nMinB;
    maxRes = nMaxA + nMaxB;
}
void output(){
    cout << minRes << ' ' << maxRes << '\n';
}