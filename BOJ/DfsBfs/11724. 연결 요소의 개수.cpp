//
// Created by kimdong on 2019-07-03.
//

#include <iostream>
#include <vector>
using namespace std;

int N,M;
vector<vector<int>> link;
vector<bool> visit;
int ans;

void input();
void dfs(int node);
int spread();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    link.assign(N,vector<int>());
    int start,finish;
    for(int i=0; i<M; i++) {
        cin >> start >> finish;
        link[--start].push_back(--finish);
        link[finish].push_back(start);
    }
}
void dfs(int node) {
    visit[node] = true;
    int len = link[node].size();
    for(int j=0; j<len; j++) if(!visit[link[node][j]]) dfs(link[node][j]);
}
int spread() {
    visit.assign(N,false);
    for(int i=0; i<N; i++) if(!visit[i]) dfs(i), ans++;
    for(int i=0; i<N; i++) if(!visit[i]) ans++;
    return ans;
}
void output() {
    cout << spread() << '\n';
}