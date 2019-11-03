//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1,0,1,0};
int dC[4] = {0,1,0,-1};

int M,N,K;
vector<vector<bool>> map;
vector<vector<int>> visit;
int cnt = 1;

void input();
void go(vertex ver,int label);
void field();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    field();
    output();
    return 0;
}

void input() {
    cin >> M >> N >> K;
    map.assign(M,vector<bool>(N,false));
    visit.assign(M,vector<int>(N,0));
    for(int k=0; k<K; k++) {
        int c1,r1,c2,r2;
        cin >> c1 >> r1 >> c2 >> r2;
        for(int i=r1; i<r2; i++)
            for(int j=c1; j<c2; j++) map[i][j] = true;
    }
}
void go(vertex ver,int label) {
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >=0 && newR < M && newC >= 0 && newC < N) {
            if(!map[newR][newC] && !visit[newR][newC]) visit[newR][newC] = label, go({newR,newC},label);
        }
    }
}
void field() {
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            if(!map[i][j] && !visit[i][j]) visit[i][j] = cnt, go({i,j}, cnt), cnt++;
    cnt--;
}
void output() {
    vector<int> count(cnt+1,0);
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++) if(visit[i][j]) count[visit[i][j]]++;
    cout << cnt << '\n';
    sort(count.begin(),count.end());
    for(int i=1; i<=cnt; i++) cout << count[i] << ' ';
    cout << '\n';
}