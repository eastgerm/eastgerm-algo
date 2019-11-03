//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int k,n1,n2;

void input();
int worldCup();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> k >> n1 >> n2;
}
int worldCup(){
    int small = MIN(n1,n2);
    int big = n1 + n2 - small;

    for(int i=1;;i++) {
        if(small%2 && big-small==1) return i;
        small = (small+1)/2, big = (big+1)/2;
    }
}
void output(){
    cout << worldCup() << endl;
}