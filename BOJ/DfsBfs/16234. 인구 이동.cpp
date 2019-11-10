//
// Created by kimdong on 2019-06-12.
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

int N,L,R;
vector<vector<int>> map;
vector<vector<bool>> visit;
int cnt = -1;
int sum,len;
bool check = false;
vector<int> trans;
int ans = -1;

bool possible(int a, int b){
    int sub = a > b ? a-b : b-a;
    return sub >= L && sub <= R;
}
void input();
void go(vertex ver);
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
    cin >> N >> L >> R;
    map.assign(N,vector<int>(N,0));
    visit.assign(N,vector<bool>(N,false));
    trans.push_back(0);
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> map[i][j];
}
void go(vertex ver) {
    for(int i=0; i<4; i++) {
        int newR = ver.row + dR[i], newC = ver.col + dC[i];
        if(newR >=0 && newR < N && newC >=0 && newC < N) {
            if(!visit[newR][newC] && possible(map[ver.row][ver.col],map[newR][newC])) {
                check = true;
                visit[newR][newC] = true, go({newR,newC});
                sum += map[newR][newC], len++;
                map[newR][newC] = cnt;
            }
        }
    }
}
void spread() {
    int prev = 0;

    for(int tc=0; ;tc++) {
        prev = cnt;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(!visit[i][j]) {
                    visit[i][j] = true;
                    go({i,j});
                    if(check) {
                        sum += map[i][j], len++;
                        map[i][j] = cnt;
                        trans.push_back(sum/len);
                        sum = len = 0;
                        check = false;
                        cnt--;
                    }
                }
            }
        if(prev == cnt) {
            ans = tc;
            return;
        }
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(map[i][j] < 0) map[i][j] = trans[-map[i][j]];
            }
        visit.assign(N,vector<bool>(N,false));
    }
}
void output() {
    cout << ans << '\n';
}