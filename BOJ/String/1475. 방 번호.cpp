//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
#include <string>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

string N;
int check[9] = {0};

void input();
int makeCheck();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
}
int makeCheck(){
    int ans = -1;
    int len = N.length();
    for(int i=0; i<len; i++) N[i] != '9' ? check[N[i]-'0']++ : check[6]++;
    check[6] = check[6]%2 ? check[6]/2 + 1 : check[6]/2;
    for(int i=0; i<9; i++) ans = MAX(ans,check[i]);
    return ans;
}
void output(){
    cout<< makeCheck() << endl;
}