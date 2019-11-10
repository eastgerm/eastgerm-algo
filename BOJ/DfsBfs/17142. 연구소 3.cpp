//
// Created by kimdong on 2019-07-05.
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

int N,M;
vector<vector<int>> map,temp;
vector<vector<bool>> visit;
vector<vertex> virus;
vector<int> prior;
queue<info> Q;
int zero,zeroTemp;

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
    cin >> N >> M;
    map.assign(N,vector<int>(N,0));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> map[i][j];
            if(map[i][j] == 2) virus.push_back({i,j});
            else if(map[i][j] == 0) zero++;
        }
    temp = map;
    zeroTemp = zero;
}
void go(info capsule) {
    for(int i=0; i<4; i++) {
        int newR = capsule.ver.row + dR[i], newC = capsule.ver.col + dC[i];
        if(newR < 0 || newR >= N) continue;
        if(newC < 0 || newC >= N) continue;
        if(map[newR][newC] == 0 && !visit[newR][newC]) {
            visit[newR][newC] = true;
            map[newR][newC] = 2;
            zero--;
            info newCapsule = capsule;
            newCapsule.ver = {newR,newC};
            newCapsule.time++;
            Q.push(newCapsule);
        }
        else if(map[newR][newC] == 2 && !visit[newR][newC]) {
            visit[newR][newC] = true;
            info newCapsule = capsule;
            newCapsule.ver = {newR,newC};
            newCapsule.time++;
            Q.push(newCapsule);
        }
    }
}
int spread() {
    if(zero == 0) return 0;
    int ans = 987654321;
    int len = virus.size();
    prior.assign(len,1);
    for(int i=0; i<M; i++) prior[i] = 0;
    do {
        int tempAns = 0;
        zero = zeroTemp;
        map = temp;
        while(!Q.empty()) Q.pop();
        visit.assign(N,vector<bool>(N,false));
        int cnt = 0;
        for(int i=0; i<len; i++) {
            if(prior[i] == 0) {
                int nowR = virus[i].row, nowC = virus[i].col;
                visit[nowR][nowC] = true;
                info newCapsule = {{nowR,nowC},0};
                Q.push(newCapsule);
                cnt++;
            }
            if(cnt == M) break;
        }
        for(int t=0; ; t++) {
            while(Q.front().time == t) {
                go(Q.front());
                Q.pop();
                if(Q.empty()) break;
            }
            if(zero == 0) {
                tempAns = t+1;
                break;
            }
            if(Q.empty()) {
                tempAns = 987654321;
                break;
            }
        }
        ans = ans < tempAns ? ans : tempAns;
    } while(next_permutation(prior.begin(),prior.end()));
    return ans == 987654321 ? -1 : ans;
}
void output() {
    cout << spread() << '\n';
}