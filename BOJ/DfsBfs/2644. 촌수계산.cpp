//
// Created by kimdong on 2019-10-06.
//

#include <iostream>
#include <vector>

using namespace std;

#define min(x, y) ((x)<(y)?(x):(y))
#define INF 1001

int N;
int personA, personB;
int M;
vector<vector<int> > map;

void input();

int floyd();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    cin >> personA >> personB;
    map.assign(N, vector<int>(N, INF));
    cin >> M;
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--, B--;
        map[A][B] = map[B][A] = 1;
    }
}

int floyd() {
    for (int mid = 0; mid < N; mid++) {
        for (int start = 0; start < N; start++) {
            for (int finish = 0; finish < N; finish++) {
                if(start == finish) continue;
                if (map[start][finish] > map[start][mid] + map[mid][finish])
                    map[start][finish] = map[start][mid] + map[mid][finish];
            }
        }
    }

    return map[personA - 1][personB - 1] != INF ? map[personA - 1][personB - 1] : -1;
}

void output() {
    cout << floyd() << '\n';
}
