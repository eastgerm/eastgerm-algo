//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

int totalSec = 0;

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
    cin >> a >> b >> c >> d;
    totalSec = a+b+c+d;
}
void output(){
    int m = totalSec / 60;
    int s = totalSec % 60;
    cout << m << '\n' << s << '\n';
}