//
// Created by kimdong on 2018-09-02.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct vertex {
    int row;
    int col;
};

int N = 0;
int M = 0;
int map[50][50] = { 0 };
vector<vertex> house_c;
int idxH = 0;
vector<vertex> store_c;
vector<bool> store_true;
int idxS = 0;
int res1 = 10001;

void input();
void choice();
void output();
int distance(vertex a,vertex b);
int chanSign(int a, int b);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    choice();
    output();

    return 0;
}

void input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cin >> map[i][j];
            if (map[i][j] == 1)
                house_c.push_back({ i,j });
            else if(map[i][j])
                store_c.push_back({ i,j });
        }
    idxH = house_c.size();
    idxS = store_c.size();
    store_true.assign(idxS, true);
}

void choice() {
    if (M <= idxS)
        for (int i = 0; i < M; i++)
            store_true[i] = false;
    else
        store_true.assign(idxS, false);
    do {
        int sum = 0;
        for (int i = 0; i < idxH; i++) {
            int min = 101;
            for (int j = 0; j < idxS; j++) {
                if (!store_true[j]) {
                    int dis = distance(house_c[i], store_c[j]);
                    min = min < dis ? min : dis;
                }
            }
            sum += min;
        }
        res1 = res1 < sum ? res1 : sum;
    } while (next_permutation(store_true.begin(), store_true.end()));
}

void output() {
    cout << res1 << endl;
}

int distance(vertex a, vertex b) {
    return chanSign(a.row, b.row) + chanSign(a.col, b.col);
}
int chanSign(int a, int b) {
    if (a - b >= 0)
        return a - b;
    else
        return b - a;
}