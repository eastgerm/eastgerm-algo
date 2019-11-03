//
// Created by kimdong on 2019-05-26.
//

#include <iostream>
using namespace std;

int X;
int row=1, col=1;

void input();
void group();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    group();
    output();
    return 0;
}

void input() {
    cin >> X;
}
void group() {
    for(int i=1; ;i++) {
        if(i == X) return;
        if((row+col)%2) row++, col--;
        else row--, col++;
        if(row == 0) row = 1;
        if(col == 0) col = 1;
    }
}
void output() {
    cout << row << '/' << col << '\n';
}