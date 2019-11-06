//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int burger = 987654321,sparkle = 987654321;

void input();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    int bug,spa;
    for(int i=0; i<3; i++) cin >> bug, burger = MIN(burger,bug);
    for(int i=0; i<2; i++) cin >> spa, sparkle = MIN(sparkle,spa);
}
void output(){
    cout << burger+sparkle-50 << endl;
}