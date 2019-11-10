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
int di[4] = { -1,0,1,0 };
int dj[4] = { 0,1,0,-1 };

int N = 0;
int M = 0;
int map[500][500] = { 0 };
int res1 = 0;

void input();
void go(vertex ver, int depth, int prev, int sum);
void go2(vertex ver, int sum);
void spread();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    spread();
    output();

    return 0;
}

void input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> map[i][j];
}

void go(vertex ver, int depth, int prev, int sum) {
    if (depth == 3) {
        res1 = res1 > sum ? res1 : sum;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int x = ver.row + di[i]; int y = ver.col + dj[i];
        if (x < 0 || x>N - 1 || y < 0 || y>M - 1)
            1;
        else if (prev == 4 || i != (prev + 2) % 4)
            go({ x,y }, depth + 1, i, sum + map[x][y]);
    }
}

void go2(vertex ver,int sum) {
    int cnt = 0; int min = 1001;
    for (int i = 0; i < 4; i++) {
        int x = ver.row + di[i]; int y = ver.col + dj[i];
        if (x < 0 || x>N - 1 || y < 0 || y>M - 1)
            1;
        else {
            min = min < map[x][y] ? min : map[x][y];
            sum += map[x][y];
            cnt++;
        }
    }
    if (cnt == 3)
        res1 = res1 > sum ? res1 : sum;
    else if (cnt == 4)
        res1 = res1 > sum - min ? res1 : sum - min;
}

void spread() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            go({ i,j }, 0, 4, map[i][j]);
            go2({ i,j }, map[i][j]);
        }
}

void output() {
    cout << res1 << endl;
}