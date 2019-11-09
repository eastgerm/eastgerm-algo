//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
using namespace std;

struct vertex {
    int row;
    int col;
};

int N;
int ans;

void input();
bool possible(vertex a, vertex b);
void dfs(int depth, vector<int> queens);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(0,vector<int>());
    output();
    return 0;
}

void input() {
    cin >> N;
}
bool possible(vertex a, vertex b) {
    if(a.row == b.row) return false;
    if(a.col == b.col) return false;
    if(a.row-b.row == a.col-b.col) return false;
    if(a.row-b.row == b.col-a.col) return false;
    return true;
}
void dfs(int depth, vector<int> queens) {
    if(depth == N) {
        ans++;
        return;
    }
    for(int i=0; i<N; i++) {
        bool poss = true;
        for(int j=0; j<depth; j++) {
            if(!possible({depth,i},{j,queens[j]})) {
                poss = false;
                break;
            }
        }
        if(poss) {
            queens.push_back(i);
            dfs(depth+1,queens);
            queens.pop_back();
        }
    }
}
void output() {
    cout << ans << '\n';
}