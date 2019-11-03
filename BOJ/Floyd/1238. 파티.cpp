//
// Created by kimdong on 2019-10-14.
//

#include <iostream>
#include <vector>

using namespace std;

#define INF 10000001
#define max(x, y) ((x)>(y)?(x):(y))
#define min(x, y) ((x)<(y)?(x):(y))

int N, M, X;
vector<vector<int> > map;

void input();

void floyd();

int result();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    floyd();
    output();
    return 0;
}

void input() {
    cin >> N >> M >> X;
    map.assign(N, vector<int>(N, INF));
    for (int i = 0; i < M; i++) {
        int a, b, value;
        cin >> a >> b >> value;
        map[a - 1][b - 1] = value;
    }
}

void floyd() {
    for (int mid = 0; mid < N; mid++)
        for (int start = 0; start < N; start++)
            for (int finish = 0; finish < N; finish++)
                map[start][finish] = min(map[start][finish], map[start][mid] + map[mid][finish]);
}

int result() {
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if(i == X-1) continue;
        ans = max(ans, map[i][X - 1] + map[X - 1][i]);
    }
    return ans;
}

void output() {
    cout << result() << '\n';
}