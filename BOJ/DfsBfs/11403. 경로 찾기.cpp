//
// Created by kimdong on 2019-07-03.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> link;
vector<vector<bool>> map;

void input();
void dfs(int start, int finish);
void filledMap();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    filledMap();
    output();
    return 0;
}

void input() {
    cin >> N;
    link.assign(N,vector<int>());
    int a;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            cin >> a;
            if(a) link[i].push_back(j);
        }
}
void dfs(int start, int finish) {
    if(!map[start][finish]) {
        map[start][finish] = true;
        int len = link[finish].size();
        for(int j=0; j<len; j++) dfs(start,link[finish][j]);
    }
}
void filledMap() {
    map.assign(N,vector<bool>(N,false));
    for(int i=0; i<N; i++) {
        int len = link[i].size();
        for(int j=0; j<len; j++) dfs(i,link[i][j]);
    }
}
void output() {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout << map[i][j] << ' ';
        cout << '\n';
    }
}