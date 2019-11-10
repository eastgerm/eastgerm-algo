//
// Created by kimdong on 2018-09-17.
//

#include <iostream>
#include <vector>
#include <algorithm>
//bfs
#include <queue>

using namespace std;

#define max(x, y) ((x)>(y)?(x):(y))

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1, 0, 1, 0};
int dC[4] = {0, 1, 0, -1};

int N, M;
vector<vector<int>> map, tmap;
vector<vector<bool>> visit;
vector<vertex> virus, room;
vector<int> pickedRoom;
int virusLength;
int roomLength;
int nowRoomLength;
//bfs
queue<vertex> bomb;

bool isOutOfRange(vertex ver) {
    return ver.row < 0 || ver.row >= N || ver.col < 0 || ver.col >= M;
}

bool isNotRoom(vertex ver) {
    return tmap[ver.row][ver.col] != 0;
}

bool isVisited(vertex ver) {
    return visit[ver.row][ver.col];
}

bool isMaintainRoom(int idx) {
    return pickedRoom[idx] == 1;
}

void input();

void pickFirstThreeRooms();

void goDfs(vertex ver);

//bfs
void pushQ(vertex ver);
void goBfs(vertex ver);
void popQ();

void init();

void makeNewWall();

void spreadVirusDfs();

//bfs
void spreadVirusBfs();

int safeZone();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    map.assign(N, vector<int>(M, 0));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            if (map[i][j] == 0) {
                room.push_back({i, j});
                pickedRoom.push_back(1);
                roomLength++;
            } else if (map[i][j] == 2) {
                virus.push_back({i, j});
                virusLength++;
            }
        }
    pickFirstThreeRooms();
}

void pickFirstThreeRooms() {
    pickedRoom[0] = pickedRoom[1] = pickedRoom[2] = 0;
}

void goDfs(vertex ver) {
    visit[ver.row][ver.col] = true;
    tmap[ver.row][ver.col] = 2;
    for (int i = 0; i < 4; i++) {
        vertex nowVer = {ver.row + dR[i], ver.col + dC[i]};
        if (isOutOfRange(nowVer)) continue;
        if (isNotRoom(nowVer)) continue;
        if (isVisited(nowVer)) continue;
        nowRoomLength--;
        goDfs(nowVer);
    }
}

//bfs
void pushQ(vertex ver) {
    bomb.push(ver);
    visit[ver.row][ver.col] = true;
}
void goBfs(vertex ver) {
    tmap[ver.row][ver.col] = 2;
    for (int i = 0; i < 4; i++) {
        vertex nowVer = {ver.row + dR[i], ver.col + dC[i]};
        if (isOutOfRange(nowVer)) continue;
        if (isNotRoom(nowVer)) continue;
        if (isVisited(nowVer)) continue;
        nowRoomLength--;
        pushQ(nowVer);
    }
}
void popQ() {
    while(!bomb.empty()) {
        vertex nowVer = bomb.front();
        goBfs(nowVer);
        bomb.pop();
    }
}

void init() {
    tmap = map;
    visit.assign(N, vector<bool>(M, false));
    nowRoomLength = roomLength;
}

void makeNewWall() {
    int cnt = 0;
    for (int i = 0; i < roomLength; i++) {
        if (cnt == 3) break;
        if (isMaintainRoom(i)) continue;
        vertex nowVer = {room[i].row, room[i].col};
        tmap[nowVer.row][nowVer.col] = 1;
        nowRoomLength--;
        cnt++;
    }
}

void spreadVirusDfs() {
    for (int i = 0; i < virusLength; i++) {
        vertex nowVer = {virus[i].row, virus[i].col};
        goDfs(nowVer);
    }
}

//bfs
void spreadVirusBfs() {
    for (int i = 0; i < virusLength; i++) {
        vertex nowVer = {virus[i].row, virus[i].col};
        pushQ(nowVer);
    }
    popQ();
}

int safeZone() {
    int ans = 0;
    do {
        init();
        makeNewWall();
        //spreadVirusDfs();
        spreadVirusBfs();
        ans = max(ans, nowRoomLength);
    } while (next_permutation(pickedRoom.begin(), pickedRoom.end()));
    return ans;
}

void output() {
    cout << safeZone() << '\n';
}