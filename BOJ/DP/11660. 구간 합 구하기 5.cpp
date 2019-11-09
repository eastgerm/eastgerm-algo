//
// Created by kimdong on 2019-08-20.
//

#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> sumMap;

void input();

int area(int x1, int y1, int x2, int y2);

void output(int x1, int y1, int x2, int y2);

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    input();
    return 0;
}

void input() {
    cin >> N >> M;
    sumMap.assign(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            int value;
            cin >> value;
            sumMap[i][j] = value;
            if (j != 0) sumMap[i][j] += sumMap[i][j - 1];
        }
    for (int i = 0; i < M; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        output(x1, y1, x2, y2);
    }
}

int area(int x1, int y1, int x2, int y2) {
    int res = 0;
    for (int i = x1 - 1; i < x2; i++) {
        int startCol = y1 - 2 >= 0 ? sumMap[i][y1 - 2] : 0;
        int finishCol = sumMap[i][y2 - 1];
        res += (finishCol - startCol);
    }
    return res;
}

void output(int x1, int y1, int x2, int y2) {
    cout << area(x1, y1, x2, y2) << '\n';
}