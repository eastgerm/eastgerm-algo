//
// Created by kimdong on 2018-09-05.
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
struct capsule {
    vertex ver;
    int origin;
};

int N = 0;
int M = 0;
int H = 0;
int map[32][11] = { 0 };
vector<vertex> candidate;
vector<bool> candidx;
vector<capsule> change;
int idxC = 0;
int tres = 0;
int res1 = -1;

void input();
void research();
void construct();
void go(vertex ver);
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    research();
    construct();
    output();

    return 0;
}

void input() {
    cin >> N >> M >> H;
    int ti = 0; int tj = 0;
    for (int i = 0; i < M; i++) {
        cin >> ti >> tj;
        map[ti][tj] = 1;
        map[ti][tj + 1] = 2;
    }
}

void research() {
    for (int i = 1; i <= H; i++)
        for (int j = 1; j < N; j++)
            if (!map[i][j] && !map[i][j + 1]) {
                map[i][j] = 3;
                candidate.push_back({ i,j });
            }
    idxC = candidate.size();
}

void construct() {
    for (int zero = 0; zero <= 3; zero++) {
        if (zero > idxC)
            break;
        candidx.assign(idxC, true);
        for (int i = 0; i < zero; i++)
            candidx[i] = false;
        do {
            bool impossi = false;
            if (zero) {
                for (int i = 0; i < idxC; i++) {
                    int cnt = 0;
                    if (!candidx[i]) {
                        int p = candidate[i].row; int q = candidate[i].col;
                        if (map[p][q] != 3) {
                            impossi = true;
                            break;
                        }
                        change.push_back({ { p,q }, map[p][q + 1] });
                        map[p][q] = 1;
                        map[p][q + 1] = 2;
                        if (++cnt == zero)
                            break;
                    }
                }
            }
            if (impossi)
                ;
            else {
                for (int i = 1; i < N; i++) {
                    go({ 1,i });
                    if (tres != i)
                        break;
                    if (i == N - 1) {
                        res1 = zero;
                        return;
                    }
                }
            }
            if (zero) {
                int len = change.size();
                for (int i = 0; i < len; i++) {
                    int p = change[i].ver.row; int q = change[i].ver.col;
                    map[p][q] = 3;
                    map[p][q + 1] = change[i].origin;
                }
                change.clear();
            }
        } while (next_permutation(candidx.begin(), candidx.end()));
    }
}

void go(vertex ver) {
    int x = ver.row; int y = ver.col;
    if (x > H) {
        tres = y;
        return;
    }
    if (!map[x][y] || map[x][y] == 3) {
        go({ x + 1,y });
        return;
    }
    if (map[x][y] == 1) {
        go({ x + 1,y + 1 });
        return;
    }
    if (map[x][y] == 2) {
        go({ x + 1,y - 1 });
        return;
    }
}

void output() {
    cout << res1 << endl;
}