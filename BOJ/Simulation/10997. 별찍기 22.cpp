//
// Created by kimdong on 2019-08-24.
//

#include <iostream>
#include <vector>

using namespace std;

struct vertex {
    int row;
    int col;
};
int dR[4] = {0, 1, 0, -1};
int dC[4] = {-1, 0, 1, 0};

int N;
int endR, endC;
int rSize, cSize;
vector<vector<char>> map;

bool indexCheck(vertex ver) {
    return ver.row >= 0 && ver.row < rSize && ver.col >= 0 && ver.col < cSize;
}

void input();

void go(vertex ver, int dir);

void star();

void print();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    star();
    return 0;
}

void input() {
    cin >> N;
    endR = 2 * N, endC = 2 * (N - 1);
    rSize = 4 * N - 1, cSize = 4 * N - 3;
}

void go(vertex ver, int dir) {
    int nowR = ver.row, nowC = ver.col;
    map[nowR][nowC] = '*';
    if (nowR == endR && nowC == endC) return;
    int nextR = nowR + dR[dir], nextC = nowC + dC[dir];
    int starR = nowR + 2 * dR[dir], starC = nowC + 2 * dC[dir];
    if (!indexCheck({nextR, nextC})) go({nowR, nowC}, (dir + 1) % 4);
    else if (indexCheck({starR, starC}) && map[starR][starC] == '*') go({nowR, nowC}, (dir + 1) % 4);
    else go({nextR, nextC}, dir);
}

void star() {
    if (N == 1) {
        cout << "*\n";
        return;
    }
    map.assign(rSize, vector<char>(cSize, ' '));
    go({0, cSize - 1}, 0);
    print();
}

void print() {
    for (int i = 0; i < rSize; i++) {
        if(i != 1)
            for (int j = 0; j < cSize; j++) cout << map[i][j];
        else cout << '*';
        cout << '\n';
    }
}