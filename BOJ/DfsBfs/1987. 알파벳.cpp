//
// Created by kimdong on 2019-10-29.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {-1, 0, 1, 0};
int dC[4] = {0, 1, 0, -1};

int R, C;
vector<string> map;
string visited = "00000000000000000000000000";
int ans = 0;

bool isOutOfRange(vertex ver) {
    return ver.row < 0 || ver.row >= R || ver.col < 0 || ver.col >= C;
}

bool isVisitedChar(vertex ver) {
    return visited[map[ver.row][ver.col] - 'A'] == '1';
}

void input();

void dfs(vertex ver, int cnt);

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    visited[map[0][0] - 'A'] = '1';
    dfs({0,0}, 1);
    output();
    return 0;
}

void input() {
    cin >> R >> C;
    map.assign(R, "");
    for (int i = 0; i < R; i++) cin >> map[i];
}

void dfs(vertex ver, int cnt) {
    ans = ans > cnt ? ans : cnt;
    for (int i = 0; i < 4; i++) {
        vertex newVer = {ver.row + dR[i], ver.col + dC[i]};
        if (isOutOfRange(newVer)) continue;
        if (isVisitedChar(newVer)) continue;
        visited[map[newVer.row][newVer.col] - 'A'] = '1';
        dfs(newVer, cnt + 1);
        visited[map[newVer.row][newVer.col] - 'A'] = '0';
    }
}

void output() {
    cout << ans << '\n';
}
