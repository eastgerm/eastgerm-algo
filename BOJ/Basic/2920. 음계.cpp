//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int num = 0;

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    int digit;
    for(int i=7; i>=0; i--) {
        cin >> digit;
        num += digit * pow(10,i);
    }
}
void output() {
    if(num == 12345678) cout << "ascending" << '\n';
    else if(num == 87654321) cout << "descending" << '\n';
    else cout << "mixed" << '\n';
}