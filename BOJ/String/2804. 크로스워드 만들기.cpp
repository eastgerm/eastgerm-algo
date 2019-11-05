//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

string A,B;
int aLen,bLen;
vector<string> aMap, bMap;
int I,J;

void input();
void makeMap();
void findIdx();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    makeMap();
    findIdx();
    output();
    return 0;
}

void input() {
    cin >> A >> B;
}
void makeMap() {
    aLen = A.length(), bLen = B.length();
    aMap.assign(bLen,A);
    bMap.assign(bLen,A);
    for(int i=0; i<bLen; i++)
        for(int j=0; j<aLen; j++) bMap[i][j] = B[i];
}
void findIdx() {
    for(int j=0; j<aLen; j++)
        for(int i=0; i<bLen; i++)
            if(aMap[i][j] == bMap[i][j]) {
                I = i, J = j;
                return;
            }
}
void output() {
    for(int i=0; i<bLen; i++) {
        for(int j=0; j<aLen; j++) {
            if(i == I) cout << A[j];
            else if(j == J) cout << B[i];
            else cout << '.';
        }
        cout << '\n';
    }
}