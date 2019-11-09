//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

struct int2 {
    int tomato;
    int len;
};
struct vertex {
    int row;
    int col;
    int len;
};

int dR[4] = {-1,0,1,0};
int dC[4] = {0,1,0,-1};

int M,N;
vector<vector<int2>> map;
vector<vector<bool>> visit;
bool already = true;
queue<vertex> prior;

void input();
void go(vertex ver);
void scanning();
int count();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    scanning();
    output();
    return 0;
}

void input() {
    cin >> M >> N;
    map.assign(N,vector<int2> (M,{0,0}));
    visit.assign(N,vector<bool> (M,false));
    for(int row=0; row<N; row++)
        for(int col=0; col<M; col++) {
            cin >> map[row][col].tomato;
            map[row][col].len = 0;
            if(map[row][col].tomato == 0) already = false;
            else if(map[row][col].tomato == -1) visit[row][col] = true;
            else prior.push({row,col,0}), visit[row][col] = true;
        }
}
void go(vertex ver) {
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR < 0 || newR >= N || newC < 0 || newC >= M) ;
        else if(map[newR][newC].tomato == 0 && !visit[newR][newC]) {
            visit[newR][newC] = true;
            map[newR][newC].len = ver.len + 1;
            prior.push({newR,newC,ver.len + 1});
        }
    }
}
void scanning() {
    if(already) return;
    while(!prior.empty()) {
        go(prior.front());
        prior.pop();
    }
}
int count() {
    if(already) return 0;
    int ans = 0;
    for(int row=0; row<N; row++)
        for(int col=0; col<M; col++) {
            if (!visit[row][col]) return -1;
            ans = MAX(ans,map[row][col].len);
        }
    return ans;
}
void output() {
    cout << count() << '\n';
}