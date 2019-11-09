//
// Created by kimdong on 2019-05-05.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int minGook = 0,manSae = 0;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    int a,b,c,d;
    for(int i=0; i<2; i++) cin >> a >> b >> c >> d, i == 0 ? minGook = a+b+c+d : manSae = a+b+c+d;
}
void output(){
    cout << MAX(minGook,manSae) << '\n';
}