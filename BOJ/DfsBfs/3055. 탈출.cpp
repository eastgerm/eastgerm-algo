//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
#include <vector>
#include <string>
#include <queue>
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

int R,C;
vector<string> map;
vector<vector<bool>> playerVisit;
queue<info> water;
queue<info> player;
int ans = -1;

void input();
void goWater(info capsule);
void goPlayer(info capsule);
void spread();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    spread();
    output();
    return 0;
}

void input() {
    cin >> R >> C;
    map.assign(R,"");
    playerVisit.assign(R,vector<bool>(C,false));
    for(int i=0; i<R; i++) cin >> map[i];
}
void goWater(info capsule) {
    for(int i=0; i<4; i++) {
        int newR = capsule.ver.row + dR[i], newC = capsule.ver.col + dC[i];
        if(newR >= 0 && newR < R && newC >= 0 && newC < C) {
            if(map[newR][newC] == '.') {
                map[newR][newC] = '*';
                water.push({{newR,newC},capsule.time+1});
            }
        }
    }
}
void goPlayer(info capsule) {
    for(int i=0; i<4; i++) {
        int newR = capsule.ver.row + dR[i], newC = capsule.ver.col + dC[i];
        if(newR >= 0 && newR < R && newC >= 0 && newC < C) {
            if(map[newR][newC] == 'D') {
                ans = capsule.time+1;
                return;
            }
            else if(!playerVisit[newR][newC] && map[newR][newC] == '.') {
                playerVisit[newR][newC] = true;
                player.push({{newR,newC},capsule.time+1});
            }
        }
    }
}
void spread() {
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++) {
            if(map[i][j] == 'S') {
                map[i][j] = '.';
                playerVisit[i][j] = true;
                player.push({{i,j},0});
            }
            else if(map[i][j] == '*') water.push({{i,j},0});
        }

    for(int now=0; ans<0; now++) {
        if(!water.empty()) {
            while(!water.empty() && water.front().time == now) {
                goWater(water.front());
                water.pop();
            }
        }
        if(!player.empty()) {
            while(!player.empty() && player.front().time == now) {
                goPlayer(player.front());
                player.pop();
            }
        }
        else if(ans < 0) {
            ans = 987654321;
            return;
        }
    }
}
void output() {
    ans != 987654321 ? cout << ans << '\n' : cout << "KAKTUS" << '\n';
}