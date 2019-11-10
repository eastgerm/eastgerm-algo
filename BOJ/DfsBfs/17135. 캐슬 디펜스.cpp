//
// Created by kimdong on 2019-10-06.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define max(x, y) ((x)>(y)?(x):(y))

struct vertex {
    int row;
    int col;
};
struct capsule {
    vertex ver;
    int dist;
};
int dR[3] = {0, -1, 0};
int dC[3] = {-1, 0, 1};

int N, M, D;
vector<vector<int> > map, tmap;
vector<vector<bool> > visited;
vector<int> picked;
vector<vertex> enemy;
queue<capsule> bfsQ;
int tempAns;
int gameCnt;

bool isNotGameOver() {
    return gameCnt++ <= N;
}

bool isNotArcher(int i) {
    return picked[i] != 0;
}

bool isImpossibleDist(capsule cap) {
    return cap.dist > D;
}

bool isOnTarget(capsule cap) {
    return tmap[cap.ver.row][cap.ver.col] == 1;
}

bool isOutOfRange(capsule cap) {
    return cap.ver.row < 0 || cap.ver.col < 0 || cap.ver.col >= M;
}

bool isVisited(capsule cap) {
    return visited[cap.ver.row][cap.ver.col];
}

bool isNotUniqueEnemy(int i) {
    return i != 0 && enemy[i - 1].row == enemy[i].row && enemy[i - 1].col == enemy[i].col;
}

void input();

void pickedInit();

void output();

int castleDefence();

void archerInit();

void oneSimulation();

void findMyEnemy(int archer);

void popBfs();

void go(capsule cap);

void pushEnemy(capsule cap);

void clearBfs();

void pushBfs(capsule cap);

void killEnemies();

void moveDownOneRow();


int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M >> D;
    map.assign(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) cin >> map[i][j];
    pickedInit();
}

void pickedInit() {
    picked.assign(M, 1);
    picked[0] = picked[1] = picked[2] = 0;
}

void output() {
    cout << castleDefence() << '\n';
}

int castleDefence() {
    int ans = 0;
    do {
        archerInit();
        oneSimulation();
        ans = max(ans, tempAns);
    } while (next_permutation(picked.begin(), picked.end()));
    return ans;
}

void archerInit() {
    tempAns = 0;
    gameCnt = 0;
    tmap = map;
}

void oneSimulation() {
    while (isNotGameOver()) {
        for (int i = 0; i < M; i++) {
            if (isNotArcher(i)) continue;
            findMyEnemy(i);
        }
        killEnemies();
        moveDownOneRow();
    }
}

void findMyEnemy(int archer) {
    visited.assign(N, vector<bool>(M, false));
    bfsQ.push({{N - 1, archer}, 1});
    popBfs();
}

void popBfs() {
    while (!bfsQ.empty()) {
        capsule nowCap = bfsQ.front();
        go(nowCap);
        if (bfsQ.empty()) return;
        bfsQ.pop();
    }
}

void go(capsule cap) {
    if (isImpossibleDist(cap)) return;
    if (isOnTarget(cap)) {
        pushEnemy(cap);
        clearBfs();
        return;
    }
    for (int i = 0; i < 3; i++) {
        capsule nowCap = {{cap.ver.row + dR[i], cap.ver.col + dC[i]}, cap.dist + 1};
        if (isOutOfRange(nowCap)) continue;
        if (isVisited(nowCap)) continue;
        pushBfs(nowCap);
    }
}

void pushEnemy(capsule cap) {
    enemy.push_back(cap.ver);
}

void clearBfs() {
    while (!bfsQ.empty()) bfsQ.pop();
}

void pushBfs(capsule cap) {
    visited[cap.ver.row][cap.ver.col] = true;
    bfsQ.push(cap);
}

void killEnemies() {
    for (int i = 0; i < enemy.size(); i++) {
        if (isNotUniqueEnemy(i)) continue;
        tmap[enemy[i].row][enemy[i].col] = 0;
        tempAns++;
    }
    enemy.clear();
}

void moveDownOneRow() {
    for (int i = N - 1; i >= 0; i--)
        for (int j = 0; j < M; j++) tmap[i][j] = i == 0 ? 0 : tmap[i - 1][j];
}