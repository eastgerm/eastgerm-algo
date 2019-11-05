//
// Created by kimdong on 2019-06-02.
//

#include <iostream>
#include <vector>
using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[8] = {-1,-1,0,1,1,1,0,-1};
int dC[8] = {0,1,1,1,0,-1,-1,-1};

int w,h;
vector<vector<int>> map;
vector<vector<bool>> visit;
int ans;

void func();
void input();
void go(vertex ver);
void field();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while(true) {
        input();
        if(w==0 && h==0) return;
        field();
        output();
    }
}
void input() {
    cin >> w >> h;
    map.assign(h,vector<int>(w,0));
    visit.assign(h,vector<bool>(w,false));
    for(int i=0; i<h; i++)
        for(int j=0; j<w; j++) cin >> map[i][j];
}
void go(vertex ver) {
    for(int i=0; i<8; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >= 0 && newR < h && newC >= 0 && newC < w)
            if(map[newR][newC] && !visit[newR][newC])
                visit[newR][newC] = true, go({newR,newC});
    }
}
void field() {
    for(int i=0; i<h; i++)
        for(int j=0; j<w; j++) if(map[i][j] && !visit[i][j]) visit[i][j] = true, ans++, go({i,j});
}
void output() {
    cout << ans << '\n';
    ans = 0, map.clear(), visit.clear();
}