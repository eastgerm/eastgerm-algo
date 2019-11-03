//
// Created by kimdong on 2019-07-04.
//

#include <iostream>
#include <vector>

using namespace std;

#define MAX(x, y) ((x)>(y)?(x):(y))
#define MIN(x, y) ((x)<(y)?(x):(y))

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1, 0, 1, 0};
int dC[4] = {0, 1, 0, -1};

int N;
vector<vector<int>> map;
vector<vector<bool>> tempMap, visited;
int startHeight = 101, finishHeight = -1;

bool isUnder(vertex ver, int height) {
    return map[ver.row][ver.col] <= height;
}

bool isOutOfRange(vertex ver) {
    return ver.row < 0 || ver.row >= N || ver.col < 0 || ver.col >= N;
}

bool isFalse(vertex ver) {
    return !tempMap[ver.row][ver.col];
}

bool isVisited(vertex ver) {
    return visited[ver.row][ver.col];
}

void input();

void go(vertex ver);

int spread();

void init();

void setTempMap(int height);

void checkVisit(vertex ver);

int safeArea();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    map.assign(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
            startHeight = MIN(startHeight, map[i][j]);
            finishHeight = MAX(finishHeight, map[i][j]);
        }
}

void checkVisit(vertex ver) {
    visited[ver.row][ver.col] = true;
}

void go(vertex ver) {
    checkVisit(ver);
    for (int dir = 0; dir < 4; dir++) {
        vertex nowVer = {ver.row + dR[dir], ver.col + dC[dir]};
        if (isOutOfRange(nowVer)) continue;
        if (isFalse(nowVer)) continue;
        if (isVisited(nowVer)) continue;
        go(nowVer);
    }
}

int spread() {
    int ans = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            vertex nowVer = {i, j};
            if (isFalse(nowVer)) continue;
            if (isVisited(nowVer)) continue;
            go(nowVer);
            ans++;
        }
    return ans;
}

void init() {
    tempMap.assign(N, vector<bool>(N, false));
    visited.assign(N, vector<bool>(N, false));
}

void setTempMap(int height) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            vertex nowVer = {i, j};
            if (isUnder(nowVer, height)) continue;
            tempMap[i][j] = true;
        }
}

int safeArea() {
    int ans = 1;
    for (int height = startHeight; height < finishHeight; height++) {
        init();
        setTempMap(height);
        int nowSafe = spread();
        ans = MAX(ans, nowSafe);
    }
    return ans;
}

void output() {
    cout << safeArea() << '\n';
}