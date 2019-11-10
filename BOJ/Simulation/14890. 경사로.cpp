//
// Created by kimdong on 2018-09-06.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct vertex {
    int x;
    int y;
};

int N = 0;
int L = 0;
int map[101][101] = { 0 };
int cnt = 0;
vector<int> check;

void input();
void research();
void row(vertex v);
void col(vertex v);
int chanSign(int a);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    research();
    cout << cnt << endl;

    return 0;
}

void input() {
    cin >> N >> L;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> map[i][j];
}

void research() {
    for (int i = 0; i < N; i++) {
        check.assign(N, 0);
        row({ i,0 });
        check.assign(N, 0);
        col({ 0,i });
    }
}

void row(vertex v) {
    int p = v.x; int q = v.y;
    int dis = map[p][q + 1] - map[p][q];
    int ldisl = chanSign(dis);

    if (q == N - 1) {
        cnt++;
        return;
    }

    if (ldisl >= 2 && ldisl <= 9)
        return;
    else if (dis == 0)
        row({ p,q + 1 });
    else if (dis == 1) {
        if ((q + 1) < L)
            return;
        if (check[q] == 1)
            return;
        for (int i = (q + 1) - L; i < q ; i++) {
            if (check[i] == 1 || map[p][i] != map[p][q])
                return;
        }
        row({ p,q + 1 });
    }
    else if (dis == -1) {
        if (q >= N - L)
            return;
        for (int i = q + 2; i <= q + L; i++) {
            if (map[p][i] != map[p][q + 1])
                return;
        }
        for (int i = q + 1; i <= q + L; i++)
            check[i] = 1;

        row({ p,q + L });
    }
}

void col(vertex v) {
    int p = v.x; int q = v.y;
    int dis = map[p+1][q] - map[p][q];
    int ldisl = chanSign(dis);

    if (p == N - 1) {
        cnt++;
        return;
    }

    if (ldisl >= 2 && ldisl <= 9)
        return;
    else if (dis == 0)
        col({ p + 1,q });
    else if (dis == 1) {
        if ((p + 1) < L)
            return;
        if (check[p] == 1)
            return;
        for (int j = (p + 1) - L; j < p; j++) {
            if (check[j] == 1 || map[j][q] != map[p][q])
                return;
        }
        col({ p + 1,q });
    }
    else if (dis == -1) {
        if (p >= N - L)
            return;
        for (int j = p + 2; j <= p + L; j++) {
            if (map[j][q] != map[p + 1][q])
                return;
        }
        for (int j = p + 1; j <= p + L; j++)
            check[j] = 1;

        col({ p + L,q });
    }
}

int chanSign(int a) {
    if (a >= 0)
        return a;
    else
        return -a;
}