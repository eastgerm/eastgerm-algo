//
// Created by kimdong on 2019-07-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define max(x, y) ((x)>(y)?(x):(y))

struct vertex3 {
    int height;
    int row;
    int col;
    int dist;
};
int dH[6] = {0, 0, 0, 0, -1, 1};
int dR[6] = {-1, 0, 1, 0, 0, 0};
int dC[6] = {0, 1, 0, -1, 0, 0};

int M, N, H;
vector<vector<vector<int> > > map;
vector<vector<vector<bool> > > visited;
queue<vertex3> tomatoQ;
int zeroCnt;
bool isFinish = true;

bool isOutOfRange(vertex3 ver) {
    return ver.height < 0 || ver.height >= H || ver.row < 0 || ver.row >= N || ver.col < 0 || ver.col >= M;
}

bool isNotZero(vertex3 ver) {
    return map[ver.height][ver.row][ver.col] != 0;
}

bool isVisited(vertex3 ver) {
    return visited[ver.height][ver.row][ver.col];
}

void input();

void initVector();

void pushQ(vertex3 ver);

void output();

int spread();

void go(vertex3 ver);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> M >> N >> H;
    initVector();
    for (int k = 0; k < H; k++)
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) {
                cin >> map[k][i][j];
                if (map[k][i][j] == 1) pushQ({k, i, j, 0});
                else if (map[k][i][j] == 0) zeroCnt++, isFinish = false;
            }
}

void initVector() {
    vector<vector<int> > map2;
    map2.assign(N, vector<int>(M, 0));
    map.assign(H, map2);

    vector<vector<bool> > visited2;
    visited2.assign(N, vector<bool>(M, false));
    visited.assign(H, visited2);
}

void pushQ(vertex3 ver) {
    visited[ver.height][ver.row][ver.col] = true;
    tomatoQ.push(ver);
}

void output() {
    cout << spread() << '\n';
}

int spread() {
    if (isFinish) return 0;

    int ans = 0;
    while (!tomatoQ.empty()) {
        vertex3 nowVer = tomatoQ.front();
        ans = max(ans, nowVer.dist);
        go(nowVer);
        tomatoQ.pop();
    }

    if (zeroCnt > 0) return -1;
    return ans;
}

void go(vertex3 ver) {
    for (int i = 0; i < 6; i++) {
        vertex3 nowVer = {ver.height + dH[i], ver.row + dR[i], ver.col + dC[i], ver.dist + 1};
        if (isOutOfRange(nowVer)) continue;
        if (isNotZero(nowVer)) continue;
        if (isVisited(nowVer)) continue;
        pushQ(nowVer);
        zeroCnt--;
    }
}