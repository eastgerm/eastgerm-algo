//
// Created by kimdong on 2019-06-13.
//

#include <iostream>
#include <vector>
using namespace std;

struct vertex {
    int row;
    int col;
};
struct int2 {
    int score;
    int plus;
};
int dR[4] = {-1,0,1,0};
int dC[4] = {0,1,0,-1};

int R,C,T;
vector<vector<int2>> map;
vector<int> air;
int ans;

void input();
void go(vertex ver);
void shift(vertex ver);
void shiftAll();
void spread();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    for(int tc=0; tc<T; tc++) spread();
    output();
    return 0;
}

void input() {
    cin >> R >> C >> T;
    map.assign(R,vector<int2>(C,{0,0}));
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++) {
            cin >> map[i][j].score;
            if(map[i][j].score == -1) air.push_back(i);
        }
}
void go(vertex ver) {
    int cnt = 0;
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >= 0 && newR < R && newC >= 0 && newC < C) {
            if(map[newR][newC].score != -1) {
                map[newR][newC].plus += map[ver.row][ver.col].score/5;
                cnt++;
            }
        }
    }
    map[ver.row][ver.col].score -= cnt*(map[ver.row][ver.col].score/5);
}
void shift(vertex ver) {
    int row = ver.row, col = ver.col;
    if(col == 0 && row < air[0]) {
        if(row == air[0]-1) {
            map[row][col].score = 0;
            return;
        }
        map[row+1][col].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
    if(row == 0) {
        map[row][col-1].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
    if(col == C-1 && row <= air[0]) {
        map[row-1][col].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
    if(row == air[0]) {
        map[row][col+1].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }

    if(col == 0 && row > air[1]) {
        if(row == air[1]+1) {
            map[row][col].score = 0;
            return;
        }
        map[row-1][col].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
    if(row == R-1) {
        map[row][col-1].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
    if(col == C-1 && row >= air[1]) {
        map[row+1][col].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
    if(row == air[1]) {
        map[row][col+1].score = map[row][col].score;
        map[row][col].score = 0;
        return;
    }
}
void shiftAll() {
    for(int i=air[0]-1; i>=0; i--) shift({i,0});
    for(int j=1; j<C; j++) shift({0,j});
    for(int i=1; i<=air[0]; i++) shift({i,C-1});
    for(int j=C-2; j>0; j--) shift({air[0],j});

    for(int i=air[1]+1; i<R; i++) shift({i,0});
    for(int j=1; j<C; j++) shift({R-1,j});
    for(int i=R-2; i>=air[1]; i--) shift({i,C-1});
    for(int j=C-2; j>0; j--) shift({air[1],j});
}
void spread() {
    ans = 0;
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            if(map[i][j].score > 0) go({i,j});
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++) if(map[i][j].score != -1) map[i][j].score += map[i][j].plus, map[i][j].plus = 0, ans += map[i][j].score;
    ans -= map[air[0]-1][0].score, ans -= map[air[1]+1][0].score;
    shiftAll();
}
void output() {
    cout << ans << '\n';
}