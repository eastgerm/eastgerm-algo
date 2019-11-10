//
// Created by kimdong on 2018-09-19.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct vertex {
    int row;
    int col;
};
int dice[6] = { 0,0,0,0,0,0 };
int di[5] = { 0,0,0,-1,1 };
int dj[5] = { 0,1,-1,0,0 };

int N = 0;
int M = 0;
int X = 0, Y = 0;
int K = 0;
int map[20][20] = { 0 };
int cmd[1000] = { 0 };
vertex V = { X,Y };

void input();
void rotateDice(int mode);
void go(vertex ver, int dir);
void spread();
void swap(int *a, int *b);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    spread();

    return 0;
}

void input() {
    cin >> N >> M >> X >> Y >> K;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> map[i][j];
    for (int i = 0; i < K; i++)
        cin >> cmd[i];
    V.row = X, V.col = Y;
}

void rotateDice(int mode) {
    switch (mode) {
        case 1:
            swap(&dice[2], &dice[1]);
            swap(&dice[1], &dice[3]);
            swap(&dice[1], &dice[5]);
            break;
        case 2:
            swap(&dice[2], &dice[3]);
            swap(&dice[3], &dice[1]);
            swap(&dice[3], &dice[5]);
            break;
        case 3:
            swap(&dice[2], &dice[4]);
            swap(&dice[4], &dice[0]);
            swap(&dice[4], &dice[5]);
            break;
        case 4:
            swap(&dice[2], &dice[0]);
            swap(&dice[0], &dice[4]);
            swap(&dice[0], &dice[5]);
            break;
    }
}

void go(vertex ver, int dir) {
    int x = ver.row + di[dir]; int y = ver.col + dj[dir];
    if (x<0 || x>N - 1 || y<0 || y>M - 1)
        1;
    else if (map[x][y]) {
        rotateDice(dir);
        dice[5] = map[x][y];
        map[x][y] = 0;
        V.row = x, V.col = y;
        cout << dice[2] << endl;
    }
    else {
        rotateDice(dir);
        map[x][y] = dice[5];
        V.row = x, V.col = y;
        cout << dice[2] << endl;
    }
}

void spread() {
    for (int i = 0; i < K; i++)
        go(V, cmd[i]);
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}