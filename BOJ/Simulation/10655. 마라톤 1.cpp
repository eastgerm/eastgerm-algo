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

int taxiDist(vertex a, vertex b) {
    int horizon = a.col < b.col ? b.col - a.col : a.col - b.col;
    int vertical = a.row < b.row ? b.row - a.row : a.row - b.row;
    return horizon + vertical;
}

int N;
vector<vertex> checkPoint;

void input();

int spread();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    checkPoint.assign(N, {0, 0});
    for (int i = 0; i < N; i++) cin >> checkPoint[i].row >> checkPoint[i].col;
}

int spread() {
    int ans = 987654321;
    int totalDist = 0;
    for (int i = 1; i < N; i++) totalDist += taxiDist(checkPoint[i - 1], checkPoint[i]);
    for (int i = 1; i < N - 1; i++) {
        int temp = totalDist;
        temp -= (taxiDist(checkPoint[i - 1], checkPoint[i]) + taxiDist(checkPoint[i], checkPoint[i + 1]));
        temp += taxiDist(checkPoint[i - 1], checkPoint[i + 1]);
        if (ans > temp) ans = temp;
    }
    return ans;
}

void output() {
    cout << spread() << '\n';
}