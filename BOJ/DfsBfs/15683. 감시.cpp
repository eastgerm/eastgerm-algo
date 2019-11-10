//
// Created by kimdong on 2018-09-04.
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
struct camera {
    vertex ver;
    int type;
    int dir;
};
int di[4] = { -1,0,1,0 };
int dj[4] = { 0,1,0,-1 };

int c1 = 0;
int c2[2] = { 0,1 };
int c3[4] = { 0,1,2,3 };

int N = 0;
int M = 0;
int map[8][8] = { 0 };
bool area[8][8] = { 0 };
vector<camera> cctv_c;
int idxC = 0;
int nonZero = 0;
int res1 = 64;

void input();
void go(vertex ver, int dir);
void spread(vertex ver, int type, int dir);
void dfs(int depth, vector<int>);
void check(vector<int>);
void countTrue();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    dfs(0, vector<int>());
    output();

    return 0;
}

void input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            switch (map[i][j]) {
                case 1:
                    cctv_c.push_back({ { i,j },1, 4 });
                    nonZero++;
                    break;
                case 2:
                    cctv_c.push_back({ { i,j },2, 2 });
                    nonZero++;
                    break;
                case 3:
                    cctv_c.push_back({ { i,j },3, 4 });
                    nonZero++;
                    break;
                case 4:
                    cctv_c.push_back({ { i,j },4, 4 });
                    nonZero++;
                    break;
                case 5:
                    cctv_c.push_back({ { i,j },5, 1 });
                    nonZero++;
                    break;
                case 6:
                    nonZero++;
                    break;
            }
        }
    idxC = cctv_c.size();
}

void go(vertex ver, int dir) {
    int x = ver.row + di[dir]; int y = ver.col + dj[dir];
    if (x<0 || x>N - 1 || y<0 || y>M - 1)
        return;
    if (map[x][y] == 6)
        return;
    if (!map[x][y]) {
        area[x][y] = true;
        go({ x,y }, dir);
        return;
    }
    if (map[x][y])
        go({ x,y }, dir);
}

void spread(vertex ver,int type, int dir) {
    switch (type) {
        case 1:
            go(ver, dir);
            break;
        case 2:
            switch (dir) {
                case 0:
                    go(ver, 0);
                    go(ver, 2);
                    break;
                case 1:
                    go(ver, 1);
                    go(ver, 3);
                    break;
            }
            break;
        case 3:
            switch (dir) {
                case 0:
                    go(ver, 0);
                    go(ver, 1);
                    break;
                case 1:
                    go(ver, 1);
                    go(ver, 2);
                    break;
                case 2:
                    go(ver, 2);
                    go(ver, 3);
                    break;
                case 3:
                    go(ver, 3);
                    go(ver, 0);
                    break;
            }
            break;
        case 4:
            switch (dir) {
                case 0:
                    go(ver, 0);
                    go(ver, 1);
                    go(ver, 2);
                    break;
                case 1:
                    go(ver, 1);
                    go(ver, 2);
                    go(ver, 3);
                    break;
                case 2:
                    go(ver, 2);
                    go(ver, 3);
                    go(ver, 0);
                    break;
                case 3:
                    go(ver, 3);
                    go(ver, 0);
                    go(ver, 1);
                    break;
            }
            break;
        case 5:
            go(ver, 0);
            go(ver, 1);
            go(ver, 2);
            go(ver, 3);
            break;
    }
}

void dfs(int depth, vector<int> prior) {
    if (depth == idxC) {
        check(prior);
        return;
    }
    for (int i = 0; i < cctv_c[depth].dir; i++) {
        prior.push_back(i);
        dfs(depth + 1, prior);
        prior.pop_back();
    }
}
void check(vector<int> prior) {
    for (int i = 0; i < idxC; i++)
        spread(cctv_c[i].ver, cctv_c[i].type, prior[i]);
    countTrue();
}

void countTrue() {
    int tZero = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (area[i][j]) {
                tZero++;
                area[i][j] = false;
            }
    int temp = N*M - nonZero - tZero;
    res1 = res1 < temp ? res1 : temp;
}

void output() {
    cout << res1 << endl;
}