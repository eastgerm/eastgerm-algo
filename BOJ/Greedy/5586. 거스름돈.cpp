//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
using namespace std;

int price = 0;

void input();
int result();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> price;
    price = 1000 - price;
}
int result(){
    int ans = 0;
    if(price>=500) ans+=(price/500), price%=500;
    if(price>=100) ans+=(price/100), price%=100;
    if(price>=50) ans+=(price/50), price%=50;
    if(price>=10) ans+=(price/10), price%=10;
    if(price>=5) ans+=(price/5), price%=5;
    ans+=price;
    return ans;
}
void output(){
    cout << result() << endl;
}