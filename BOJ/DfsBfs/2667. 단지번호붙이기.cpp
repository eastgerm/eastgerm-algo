//
// Created by kimdong on 2019-04-04.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1, 0, 1, 0};
int dC[4] = {0, 1, 0, -1};

int N;
vector<string> map;
vector<vector<bool>> visit;
vector<int> apartments;
int aptIdx = -1;
queue<vertex> Q;

bool isOutOfRange(vertex ver) {
    return ver.row < 0 || ver.row >= N || ver.col < 0 || ver.col >= N;
}

bool isZero(vertex ver) {
    return map[ver.row][ver.col] == '0';
}

bool isVisited(vertex ver) {
    return visit[ver.row][ver.col];
}

void input();

void goDfs(vertex ver);

void goBfs(vertex ver);

void spreadDfs();

void spreadBfs();

void output();

void pushQ(vertex ver) {
    Q.push(ver);
    visit[ver.row][ver.col] = true;
}

void popQ() {
    while (!Q.empty()) {
        vertex nowVer = Q.front();
        goBfs(nowVer);
        Q.pop();
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    spreadBfs();
    output();
    return 0;
}

void input() {
    cin >> N;
    map.assign(N, "");
    visit.assign(N, vector<bool>(N, false));
    for (int i = 0; i < N; i++) cin >> map[i];
}

void goDfs(vertex ver) {
    visit[ver.row][ver.col] = true;
    apartments[aptIdx]++;
    for (int i = 0; i < 4; i++) {
        vertex nowVer = {ver.row + dR[i], ver.col + dC[i]};
        if (isOutOfRange(nowVer)) continue;
        if (isZero(nowVer)) continue;
        if (isVisited(nowVer)) continue;
        goDfs(nowVer);
    }
}

void goBfs(vertex ver) {
    apartments[aptIdx]++;
    for (int i = 0; i < 4; i++) {
        vertex nowVer = {ver.row + dR[i], ver.col + dC[i]};
        if (isOutOfRange(nowVer)) continue;
        if (isZero(nowVer)) continue;
        if (isVisited(nowVer)) continue;
        pushQ(nowVer);
    }
}

void spreadDfs() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            vertex nowVer = {i, j};
            if (isZero(nowVer)) continue;
            if (isVisited(nowVer)) continue;
            apartments.push_back(0), aptIdx++;
            goDfs(nowVer);
        }
    sort(apartments.begin(), apartments.end());
}

void spreadBfs() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            vertex nowVer = {i, j};
            if (isZero(nowVer)) continue;
            if (isVisited(nowVer)) continue;
            apartments.push_back(0), aptIdx++;
            pushQ(nowVer);
            popQ();
        }
    sort(apartments.begin(), apartments.end());
}

void output() {
    cout << aptIdx + 1 << '\n';
    for (int i = 0; i <= aptIdx; i++) cout << apartments[i] << '\n';
}