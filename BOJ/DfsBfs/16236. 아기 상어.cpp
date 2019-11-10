//
// Created by kimdong on 2019-07-13.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct vertex {
    int row;
    int col;
};
struct info {
    vertex ver;
    int time;
};
int dR[4] = {-1,0,1,0};
int dC[4] = {0,1,0,-1};

int N;
vector<vector<int>> map;
vector<vector<bool>> visit;
int nowSize = 2;
int fishCnt;
int ateFish;
queue<info> Q;
vector<vertex> targets;
int fishs[7] = {0};
int prevAns;

bool compare(vertex a, vertex b) {
    return a.row == b.row ? a.col < b.col : a.row < b.row;
}
void input();
void go(info capsule);
int spread();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    map.assign(N,vector<int>(N,0));
    visit.assign(N,vector<bool>(N,false));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> map[i][j];
            if(map[i][j] == 9) {
                visit[i][j] = true;
                map[i][j] = 0;
                Q.push({{i,j},1});
            }
            else if(map[i][j] >= 1 && map[i][j] <= 6) fishCnt++, fishs[map[i][j]]++;
        }
}
void go(info capsule) {
    for(int i=0; i<4; i++) {
        int newR = capsule.ver.row + dR[i], newC = capsule.ver.col + dC[i];
        if(newR < 0 || newR >= N) continue;
        if(newC < 0 || newC >= N) continue;
        if(visit[newR][newC]) continue;
        if(map[newR][newC] > nowSize) continue;
        if(map[newR][newC] == 0 || map[newR][newC] == nowSize) {
            visit[newR][newC] = true;
            info newCapsule = capsule;
            newCapsule.ver = {newR,newC};
            newCapsule.time++;
            Q.push(newCapsule);
            continue;
        }
        targets.push_back({newR,newC});
    }
}
int spread() {
    if(fishCnt == 0) return 0;
    for(int t=1; ; t++) {
        bool possible = false;
        for(int sz=1; sz<nowSize; sz++)
            if(fishs[sz]) {
                possible = true;
                break;
            }
        if(!possible) return t-1;

        if(Q.empty()) return prevAns;
        while(Q.front().time == t) {
            go(Q.front());
            Q.pop();
            if(Q.empty()) break;
        }
        if(!targets.empty()) {
            prevAns = t;
            sort(targets.begin(),targets.end(),compare);
            vertex nextShark = targets[0];
            ateFish++, fishCnt--, fishs[map[nextShark.row][nextShark.col]]--;
            map[nextShark.row][nextShark.col] = 0;
            if(ateFish == nowSize) nowSize++, ateFish = 0;
            targets.clear();
            while(!Q.empty()) Q.pop();
            Q.push({nextShark,t+1});
            visit.assign(N,vector<bool>(N,false));
            continue;
        }
    }
}
void output() {
    cout << spread() << '\n';
}