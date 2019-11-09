//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

bool names[31] = {false};

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    int name;
    for(int i=0; i<28; i++) cin >> name, names[name] = true;
}
void output(){
    for(int i=1; i<31; i++) if(!names[i]) cout << i << '\n';
}