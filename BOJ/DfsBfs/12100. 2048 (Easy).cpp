//
// Created by kimdong on 2018-09-21.
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
int di[4] = { -1,0,1,0 };
int dj[4] = { 0,1,0,-1 };

int N = 0;
int M[20][20] = { 0 };
int map[20][20] = { 0 };
int res1 = 0;

void input();
void go(vertex ver, int dir);
void spread(int dir);
void merge(int dir);
void spreadM(int dir);
void dfs(int depth, vector<int>);
void check(vector<int>);
void findMax();
void initialMap();
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
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> M[i][j];
}

void go(vertex ver, int dir) {
    int x = ver.row + di[dir]; int y = ver.col + dj[dir];
    if (x<0 || x>N - 1 || y<0 || y>N - 1 || map[x][y])
        return ;
    map[x][y] = map[ver.row][ver.col];
    map[ver.row][ver.col] = 0;
    go({ x,y }, dir);
}

void spread(int dir) {
    switch (dir) {
        case 0:
            for (int j = 0; j < N; j++)
                for (int i = 0; i < N; i++)
                    if (map[i][j])
                        go({ i,j }, dir);
            break;
        case 1:
            for (int i = 0; i < N; i++)
                for (int j = N - 1; j >= 0; j--)
                    if (map[i][j])
                        go({ i,j }, dir);
            break;
        case 2:
            for (int j = 0; j < N; j++)
                for (int i = N-1; i >= 0; i--)
                    if (map[i][j])
                        go({ i,j }, dir);
            break;
        case 3:
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    if (map[i][j])
                        go({ i,j }, dir);
            break;
    }
}

void merge(int dir) {
    switch (dir) {
        case 0:
            for (int j = 0; j < N; j++)
                for (int i = 0; i < N - 1; i++)
                    if (map[i][j] == map[i + 1][j])
                        map[i][j] += map[i + 1][j], map[i + 1][j] = 0;
            break;
        case 1:
            for (int i = 0; i < N; i++)
                for (int j = N - 1; j > 0; j--)
                    if (map[i][j] == map[i][j - 1])
                        map[i][j] += map[i][j - 1], map[i][j - 1] = 0;
            break;
        case 2:
            for (int j = 0; j < N; j++)
                for (int i = N - 1; i > 0; i--)
                    if (map[i][j] == map[i - 1][j])
                        map[i][j] += map[i - 1][j], map[i - 1][j] = 0;
            break;
        case 3:
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N-1; j++)
                    if (map[i][j] == map[i][j + 1])
                        map[i][j] += map[i][j + 1], map[i][j + 1] = 0;
            break;
    }
}

void spreadM(int dir) {
    spread(dir);
    merge(dir);
    spread(dir);
}

void dfs(int depth, vector<int> prior) {
    if (depth == 5) {
        check(prior);
        return;
    }
    for (int i = 0; i < 4; i++) {
        prior.push_back(i);
        dfs(depth + 1, prior);
        prior.pop_back();
    }
}
void check(vector<int> prior) {
    initialMap();
    for (int i = 0; i < 5; i++)
        spreadM(prior[i]);
    findMax();
}

void findMax() {
    int tres = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            tres = tres > map[i][j] ? tres : map[i][j];
    res1 = res1 > tres ? res1 : tres;
}

void initialMap() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            map[i][j] = M[i][j];
}

void output() {
    cout << res1 << endl;
}