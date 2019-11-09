//
// Created by kimdong on 2019-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1, 0, 1, 0};
int dC[4] = {0, 1, 0, -1};

int N, M;
vector<string> map;
vector<vertex> ans;

bool outOfRange(vertex ver) {
    return ver.row < 0 || ver.row >= N || ver.col < 0 || ver.col >= M;
}

void input();

int possibleHorizon(vertex ver);

int possibleVertical(vertex ver);

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
    cin >> N >> M;
    map.assign(N, "");
    for (int i = 0; i < N; i++) cin >> map[i];
}

int possibleHorizon(vertex ver) {
    int prevR = ver.row, prevC = ver.col - 1;
    if (outOfRange({prevR, prevC})) return 1;
    if (map[prevR][prevC] == '#') return 1;
    return -1;
}

int possibleVertical(vertex ver) {
    int prevR = ver.row - 1, prevC = ver.col;
    if (outOfRange({prevR, prevC})) return 2;
    if (map[prevR][prevC] == '#') return 2;
    return -1;
}

void spread() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (map[i][j] != '#') {
                int dir = possibleHorizon({i, j});
                if (dir >= 0) {
                    int len = 1;
                    int newR = i, newC = j;
                    for (len = 1;; len++) {
                        newR += dR[dir], newC += dC[dir];
                        if (outOfRange({newR, newC})) break;
                        if (map[newR][newC] == '#') break;
                    }
                    int ansSize = ans.size();
                    if (len >= 3 && (ansSize == 0 || (ans[ansSize-1].row != i || ans[ansSize-1].col != j))) ans.push_back({i, j});
                }
                dir = possibleVertical({i, j});
                if (dir >= 0) {
                    int len = 1;
                    int newR = i, newC = j;
                    for (len = 1;; len++) {
                        newR += dR[dir], newC += dC[dir];
                        if (outOfRange({newR, newC})) break;
                        if (map[newR][newC] == '#') break;
                    }
                    int ansSize = ans.size();
                    if (len >= 3 && (ansSize == 0 || (ans[ansSize-1].row != i || ans[ansSize-1].col != j))) ans.push_back({i, j});
                }
            }
        }
    }
}

void output() {
    int len = ans.size();
    cout << len << '\n';
    for (int i = 0; i < len; i++) cout << ans[i].row + 1 << ' ' << ans[i].col + 1 << '\n';
}