//
// Created by kimdong on 2018-09-04.
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
int di[4] = { 0,-1,0,1 };
int dj[4] = { 1,0,-1,0 };

int N = 0;
int Col[20] = { 0 };
int Row[20] = { 0 };
int d[20] = { 0 };
int g[20] = { 0 };
bool map[101][101] = { false };
vector<vertex> dragon;
int res1 = 0;

void input();
void rotate90();
void makeDragon();
void countNemo();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    makeDragon();
    countNemo();
    output();

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> Col[i] >> Row[i] >> d[i] >> g[i];
}

void rotate90() {
    int len = dragon.size();
    int dx = dragon[len - 1].col; int dy = dragon[len - 1].row;
    for (int i = len - 2; i >= 0; i--) {
        int tx = dragon[i].col - dx; int ty = dragon[i].row - dy;
        int rx = -ty + dx; int ry = tx + dy;
        if (rx >= 0 && rx < 101 && ry >= 0 && ry < 101) {
            map[ry][rx] = true;
            dragon.push_back({ ry,rx });
        }
    }
}

void makeDragon() {
    for (int i = 0; i < N; i++) {
        int p1 = Row[i]; int q1 = Col[i];
        int p2 = Row[i]+di[d[i]]; int q2 = Col[i] + dj[d[i]];
        map[p1][q1] = true;
        map[p2][q2] = true;
        dragon.push_back({ p1,q1 });
        dragon.push_back({ p2,q2 });
        for (int j = 0; j < g[i]; j++)
            rotate90();
        dragon.clear();
    }
}

void countNemo() {
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (map[i][j] && map[i][j + 1] && map[i + 1][j] && map[i + 1][j + 1])
                res1++;
}

void output() {
    cout << res1 << endl;
}