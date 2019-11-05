//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int r1,s;

void input();
int r2();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> r1 >> s;
}
int r2(){
    return 2*s - r1;
}
void output(){
    cout<< r2() << endl;
}