//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <vector>

using namespace std;

int R, C, ZR, ZC;
vector<vector<char>> map;

void input();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> R >> C >> ZR >> ZC;
    map.assign(R, vector<char>(C, ' '));
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++) cin >> map[i][j];
}

void output() {
    for (int i = 0; i < R * ZR; i++) {
        for (int j = 0; j < C * ZC; j++) cout << map[i/ZR][j/ZC];
        cout << '\n';
    }
}