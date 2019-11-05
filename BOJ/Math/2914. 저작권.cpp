//
// Created by kimdong on 2019-05-03.
//

#include <iostream>
using namespace std;

int N,I;

void input();
void output();

int main(){
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> I;
}
void output(){
    int ans = N*(I-1) + 1;
    cout << ans << endl;
}