//
// Created by kimdong on 2019-10-06.
//

#include <iostream>
#include <vector>

using namespace std;

#define INF 1000001

int N, M;
vector<vector<int> > map;

void input();

void floyd();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    floyd();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    map.assign(N, vector<int>(N, INF));
    for (int i = 0; i < M; i++) {
        int row, col, value;
        cin >> row >> col >> value;
        if(map[row - 1][col - 1] > value) map[row - 1][col - 1] = value;
    }
}

void floyd() {
    for (int mid = 0; mid < N; mid++)
        for (int start = 0; start < N; start++)
            for (int finish = 0; finish < N; finish++) {
                if (start == finish) continue;
                if (map[start][finish] > map[start][mid] + map[mid][finish])
                    map[start][finish] = map[start][mid] + map[mid][finish];
            }
}

void output() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (map[i][j] == INF) cout << 0 << ' ';
            else cout << map[i][j] << ' ';
        }
        cout << '\n';
    }
}