//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
using namespace std;

int N,M;

void input();
void dfs(int depth, vector<int> bowl);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(0,vector<int>());
    return 0;
}

void input() {
    cin >> N >> M;
}
void dfs(int depth, vector<int> bowl) {
    if(depth == M) {
        for(int i=0; i<M; i++) cout << bowl[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=1; i<=N; i++) {
        bowl.push_back(i);
        dfs(depth+1,bowl);
        bowl.pop_back();
    }
}