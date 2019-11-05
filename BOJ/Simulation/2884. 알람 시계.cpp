//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

int H,M;
int newH,newM;

void input();
void alarm();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    alarm();
    output();

    return 0;
}

void input(){
    cin >> H >> M;
}
void alarm(){
    int total = H*60 + M;
    total += 1440;
    total -= 45;
    total %= 1440;
    newH = total/60, newM = total%60;
}
void output(){
    cout << newH << ' ' << newM << '\n';
}