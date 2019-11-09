//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int H,W;
vector<string> map;
vector<vector<int>> res;

void input();
void result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    result();
    output();
    return 0;
}

void input() {
    cin >> H >> W;
    map.assign(H,"");
    for(int i=0; i<H; i++) cin >> map[i];
}
void result() {
    res.assign(H,vector<int>(W,0));
    for(int i=0; i<H; i++) {
        bool check = false;
        int cnt = 0;
        for(int j=0; j<W; j++) {
            if(map[i][j] == 'c') check = true, res[i][j] = 0, cnt = 0;
            else if(!check) res[i][j] = -1;
            else res[i][j] = ++cnt;
        }
    }
}
void output() {
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) cout << res[i][j] << ' ';
        cout << '\n';
    }
}