//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int N = 0;

void input();
int cycle();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
}
int cycle(){
    int newNum = -1;

    for(int i=1; newNum!=N; i++) {
        newNum = i==1 ? N : newNum;
        int ten = newNum/10, one = newNum%10;
        int newTen = one;
        int newOne = (ten + one)%10;
        newNum = newTen*10 + newOne;
        if(newNum == N) return i;
    }
}
void output(){
    cout<< cycle() << endl;
}