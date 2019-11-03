//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <vector>
using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1,0,1,0};
int dC[4] = {0,1,0,-1};

int T;
int M,N,K;
vector<vector<bool>> map;
vector<vector<bool>> visit;
int ans = 0;

void inputT();
void input();
void go(vertex ver);
void spread();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        spread();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> M >> N >> K;
    map.assign(M,vector<bool>(N,false));
    visit.assign(M,vector<bool>(N,false));
    for(int i=0; i<K; i++) {
        int a,b; cin >> a >> b;
        map[a][b] = true;
    }
}
void go(vertex ver) {
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >=0 && newR < M && newC >= 0 && newC < N) {
            if(map[newR][newC] && !visit[newR][newC]) {
                visit[newR][newC] = true;
                go({newR,newC});
            }
        }
    }
}
void spread() {
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++)
            if(map[i][j] && !visit[i][j]) {
                visit[i][j] = true;
                go({i,j});
                ans++;
            }
    }
}
void output() {
    cout << ans << '\n';
    map.clear(), visit.clear(), ans = 0;
}