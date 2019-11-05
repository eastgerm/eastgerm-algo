//
// Created by kimdong on 2018-09-20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

struct vertex {
    int row;
    int col;
};
int di[4] = { -1,0,1,0 };
int dj[4] = { 0,1,0,-1 };

int N = 0;
int K = 0;
int r = 0, c = 0;
int map[101][101] = { 0 };
int L = 0;
int X = 0;
char C = ' ';
char cmd[10001] = { ' ' };
deque<vertex> baam;
int res1 = 0;

void input();
void go(vertex ver, int depth, int dir);
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    baam.push_front({ 1,1 });
    map[1][1] = 2;
    go({ 1,1 }, 0, 1);
    output();

    return 0;
}

void input() {
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        cin >> r >> c;
        map[r][c] = 1;
    }
    cin >> L;
    for (int i = 0; i < L; i++) {
        cin >> X >> C;
        cmd[X] = C;
    }
}

void go(vertex ver, int depth, int dir) {
    int x = ver.row + di[dir]; int y = ver.col + dj[dir];
    if (x == 0 || x == N + 1 || y == 0 || y == N + 1 || map[x][y] == 2) {
        res1 = depth + 1;
        return;
    }
    if (map[x][y] == 1) {
        baam.push_front({ x,y });
        map[x][y] = 2;
        if (cmd[depth + 1] == 'L')
            go({ x,y }, depth + 1, (dir + 3) % 4);
        else if (cmd[depth + 1] == 'D')
            go({ x,y }, depth + 1, (dir + 1) % 4);
        else
            go({ x,y }, depth + 1, dir);
    }
    else {
        baam.push_front({ x,y });
        map[x][y] = 2;
        if (cmd[depth + 1] == 'L') {
            map[baam.back().row][baam.back().col] = 0;
            baam.pop_back();
            go({ x,y }, depth + 1, (dir + 3) % 4);
        }
        else if (cmd[depth + 1] == 'D') {
            map[baam.back().row][baam.back().col] = 0;
            baam.pop_back();
            go({ x,y }, depth + 1, (dir + 1) % 4);
        }
        else {
            map[baam.back().row][baam.back().col] = 0;
            baam.pop_back();
            go({ x,y }, depth + 1, dir);
        }
    }
}

void output() {
    cout << res1 << endl;
}