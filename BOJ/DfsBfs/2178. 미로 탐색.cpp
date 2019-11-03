//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

struct vertex {
    int row;
    int col;
};
struct capsule {
    vertex ver;
    int dist;
};
int dR[4] = {-1, 0, 1, 0};
int dC[4] = {0, 1, 0, -1};

int N, M;
vector<string> map;
vector<vector<bool> > visited;
queue<capsule> Q;

bool isOutOfRange(capsule cap) {
    return cap.ver.row < 0 || cap.ver.row >= N || cap.ver.col < 0 || cap.ver.col >= M;
}

bool isZero(capsule cap) {
    return map[cap.ver.row][cap.ver.col] == '0';
}

bool isVisited(capsule cap) {
    return visited[cap.ver.row][cap.ver.col];
}

bool isFinishVertex(capsule cap) {
    return cap.ver.row == N - 1 && cap.ver.col == M - 1;
}

void input();

void go(capsule cap);

int spread();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    spread();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    map.assign(N, "");
    visited.assign(N, vector<bool>(M, false));
    for (int i = 0; i < N; i++) cin >> map[i];
}

void go(capsule cap) {
    for (int i = 0; i < 4; i++) {
        capsule nowCap = {{cap.ver.row + dR[i], cap.ver.col + dC[i]}, cap.dist + 1};
        if (isOutOfRange(nowCap)) continue;
        if (isZero(nowCap)) continue;
        if (isVisited(nowCap)) continue;
        Q.push(nowCap);
        visited[nowCap.ver.row][nowCap.ver.col] = true;
    }
}

int spread() {
    Q.push({{0, 0}, 1});
    visited[0][0] = true;
    while (!Q.empty()) {
        capsule nowCap = Q.front();
        if (isFinishVertex(nowCap)) {
            return nowCap.dist;
        }
        go(nowCap);
        Q.pop();
    }
    return -404;
}

void output() {
    cout << spread() << '\n';
}