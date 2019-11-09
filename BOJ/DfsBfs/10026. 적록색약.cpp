//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1,0,1,0};
int dC[4] = {0,1,0,-1};

int N;
vector<string> map;
vector<vector<bool>> visit;
vector<vector<bool>> visit2;
int ans1,ans2;

void input();
void go(vertex ver);
void go2(vertex ver);
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
    cin >> N;
    map.assign(N,"");
    visit.assign(N,vector<bool>(N,false));
    visit2.assign(N,vector<bool>(N,false));
    for(int i=0; i<N; i++) cin >> map[i];
}
void go(vertex ver) {
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >= 0 && newR < N && newC >= 0 && newC <N)
            if(map[ver.row][ver.col] == map[newR][newC] && !visit[newR][newC]) visit[newR][newC] = true, go({newR,newC});
    }
}
void go2(vertex ver) {
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >= 0 && newR < N && newC >= 0 && newC <N) {
            if(map[ver.row][ver.col] == 'B') {
                if (map[ver.row][ver.col] == map[newR][newC] && !visit2[newR][newC])
                    visit2[newR][newC] = true, go2({newR, newC});
            }
            else {
                if ((map[newR][newC] == 'R' || map[newR][newC] == 'G') && !visit2[newR][newC])
                    visit2[newR][newC] = true, go2({newR, newC});
            }
        }

    }
}
void field() {
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(!visit[i][j]) {
                ans1++;
                visit[i][j] = true, go({i,j});
            }
            if(!visit2[i][j]) {
                ans2++;
                visit2[i][j] = true, go2({i,j});
            }
        }
}
void output() {
    cout << ans1 << ' ' << ans2 << '\n';
}