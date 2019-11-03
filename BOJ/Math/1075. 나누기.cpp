//
// Created by kimdong on 2019-05-03.
//

#include <iostream>
using namespace std;

int N,F;

void input();
int result();
void output();

int main(){
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> F;
}
int result(){
    int start = N - N%100;
    for(int i=start;;i++) if(i%F == 0) return i;
}
void output(){
    int res = result();
    int ten = (res%100)/10, one = res%10;
    cout << ten << one << endl;
}