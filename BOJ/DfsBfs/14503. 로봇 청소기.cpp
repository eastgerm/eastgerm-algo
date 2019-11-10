//
// Created by kimdong on 2018-09-17.
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
int di[4] = { -1,0,1,0 };
int dj[4] = { 0,1,0,-1 };

int N = 0;
int M = 0;
int r = 0;
int c = 0;
int D = 0;
int map[50][50] = { 0 };
int cnt = 1;

void input();
void go(vertex ver, int dir, int prev);
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    go({ r,c }, D, 0);
    output();

    return 0;
}

void input() {
    cin >> N >> M >> r >> c >> D;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> map[i][j];
    map[r][c] = 2;
}

void go(vertex ver, int dir, int prev) {
    int d = (dir + 3) % 4;
    int x = ver.row + di[d]; int y = ver.col + dj[d];
    if (prev == 4) {
        x = ver.row - di[dir]; y = ver.col - dj[dir];
        if (map[x][y] == 1)
            return;
        go({ x,y }, dir, 0);
        return;
    }
    if (map[x][y]) {
        go(ver, d, prev + 1);
        return;
    }
    cnt++;
    map[x][y] = 2;
    go({ x,y }, d, 0);
    return;
}

void output() {
    cout << cnt << endl;
}