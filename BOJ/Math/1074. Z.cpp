//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int N,r,c;

void input();
int Z(int exp, int row, int col);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> r >> c;
}
int Z(int exp, int row, int col) {
    if(row == 0 && col == 0) return 0;
    if(row == 0 && col == 1) return 1;
    if(row == 1 && col == 0) return 2;
    if(row == 1 && col == 1) return 3;

    int center = (int)pow(2,exp-1);
    int norm = center*center;
    if(row < center && col < center) return Z(exp-1,row,col);
    if(row < center && col >= center) return norm + Z(exp-1,row,col-center);
    if(row >= center && col < center) return 2*norm + Z(exp-1,row-center,col);
    if(row >= center && col >= center) return 3*norm + Z(exp-1,row-center,col-center);

    return -1;
}
void output() {
    cout << Z(N,r,c) << '\n';
}