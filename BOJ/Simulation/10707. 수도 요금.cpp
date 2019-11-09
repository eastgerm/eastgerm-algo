//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int perX,basicY,cutY,perY,P;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    cin >> perX >> basicY >> cutY >> perY >> P;
}
int result(){
    int totalX = perX * P;
    int totalY = P <= cutY ? basicY : basicY + (P-cutY) * perY;
    return MIN(totalX,totalY);
}
void output(){
    cout << result() << '\n';
}