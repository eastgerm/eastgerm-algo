//
// Created by kimdong on 2018-09-20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct vertex {
    int row;
    int col;
};
int di[4] = { -1,0,1,0 };
int dj[4] = { 0,1,0,-1 };

int N = 0;
int M = 0;
string s;
char map[10][10] = { ' ' };
vertex R;
vertex B;
vertex red;
vertex blue;
int res1 = 11;
bool gameoverB = false;
bool gameoverR = false;

void input();
void blueGo(vertex ver, int dir);
void redGo(vertex ver, int dir);
void spread(int mode);
void dfs(int depth, vector<int> prior);
void check(vector<int>);
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    dfs(0, vector<int>());
    output();

    return 0;
}

void input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            map[i][j] = s[j];
            if (s[j] == 'R')
                R = { i,j };
            else if (s[j] == 'B')
                B = { i,j };
        }
    }
}

void blueGo(vertex ver, int dir) {
    int x = ver.row + di[dir]; int y = ver.col + dj[dir];
    if (map[x][y] == 'O') {
        map[ver.row][ver.col] = '.';
        gameoverB = true;
        return;
    }
    if (map[x][y] != '.')
        return;
    map[ver.row][ver.col] = '.';
    blue = { x,y };
    map[blue.row][blue.col] = 'B';
    blueGo(blue, dir);
}

void redGo(vertex ver, int dir) {
    int x = ver.row + di[dir]; int y = ver.col + dj[dir];
    if (map[x][y] == 'O') {
        map[ver.row][ver.col] = '.';
        gameoverR = true;
        return;
    }
    if (map[x][y] != '.')
        return;
    map[ver.row][ver.col] = '.';
    red = { x,y };
    map[red.row][red.col] = 'R';
    redGo(red, dir);
}

void spread(int mode) {
    switch (mode) {
        case 0:
            if (blue.row < red.row) {
                blueGo(blue, mode);
                redGo(red, mode);
            }
            else {
                redGo(red, mode);
                blueGo(blue, mode);
            }
            break;
        case 1:
            if (blue.col > red.col) {
                blueGo(blue, mode);
                redGo(red, mode);
            }
            else {
                redGo(red, mode);
                blueGo(blue, mode);
            }
            break;
        case 2:
            if (blue.row > red.row) {
                blueGo(blue, mode);
                redGo(red, mode);
            }
            else {
                redGo(red, mode);
                blueGo(blue, mode);
            }
            break;
        case 3:
            if (blue.col < red.col) {
                blueGo(blue, mode);
                redGo(red, mode);
            }
            else {
                redGo(red, mode);
                blueGo(blue, mode);
            }
            break;
    }
}

void dfs(int depth, vector<int> prior) {
    if (depth == 10) {
        check(prior);
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (depth > 0) {
            if (i != prior[prior.size() - 1]) {
                prior.push_back(i);
                dfs(depth + 1, prior);
                prior.pop_back();
            }
        }
        else {
            prior.push_back(i);
            dfs(depth + 1, prior);
            prior.pop_back();
        }
    }
}

void check(vector<int> prior) {
    red = R; blue = B;
    map[red.row][red.col] = 'R';
    map[blue.row][blue.col] = 'B';
    for (int i = 0; i < 10; i++) {
        spread(prior[i]);
        if (gameoverR&&gameoverB) {
            gameoverR = false;
            gameoverB = false;
            map[red.row][red.col] = '.';
            map[blue.row][blue.col] = '.';
            return;
        }
        if (gameoverR) {
            res1 = i + 1 < res1 ? i + 1 : res1;
            map[red.row][red.col] = '.';
            map[blue.row][blue.col] = '.';
            gameoverR = false;
            return;
        }
        if (gameoverB) {
            gameoverB = false;
            map[red.row][red.col] = '.';
            map[blue.row][blue.col] = '.';
            return;
        }
    }
    map[red.row][red.col] = '.';
    map[blue.row][blue.col] = '.';
}

void output() {
    if (res1 < 11)
        cout << res1 << endl;
    else
        cout << -1 << endl;
}