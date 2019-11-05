//
// Created by kimdong on 2019-05-03.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int A,B,C;

void input();
void output();

int main(){
    input();
    output();
    return 0;
}

void input(){
    cin >> A >> B >> C;
}
void output(){
    int ans = MAX(B-A,C-B) - 1;
    cout << ans << endl;
}