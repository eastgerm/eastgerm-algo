//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
using namespace std;

int total = 0;

void input();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> total;
    int price = 0;
    for(int i=0;i<9; i++) cin >> price, total-=price;
}
void output(){
    cout << total << endl;
}