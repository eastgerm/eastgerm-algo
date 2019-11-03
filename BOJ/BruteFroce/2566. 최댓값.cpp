//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int map[9][9];
    int max = -1;
    int row,col;
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++) {
            cin >> map[i][j];
            if(map[i][j] > max) row = i+1, col = j+1, max = map[i][j];
        }
    cout << max << '\n' << row << ' ' << col << '\n';
    return 0;
}