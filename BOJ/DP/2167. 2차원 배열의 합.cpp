//
// Created by kimdong on 2018-11-14.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct int2 {
    int item;
    int sum;
};

int N = 0;
int M = 0;
int2 map[301][301] = { {0,0} };
int K = 0;
int p, q, x, y = 0;
int ans = 0;

void inputNMK();
void makeDP();
void solve();
void input();
void diet();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    inputNMK();
    makeDP();
    solve();

    return 0;
}

void inputNMK() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> map[i][j].item;
    cin >> K;
}

void makeDP() {
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++) {
            if (j == 1)
                map[i][j].sum = map[i][j].item;
            else
                map[i][j].sum = map[i][j].item + map[i][j - 1].sum;
        }
}

void solve() {
    for (int tc = 1; tc <= K; tc++) {
        input();
        diet();
        output();
    }
}

void input() {
    cin >> p >> q >> x >> y;
}

void diet() {
    ans = 0;
    for (int i = p; i <= x; i++)
        ans += (map[i][y].sum - map[i][q].sum + map[i][q].item);
}

void output() {
    cout << ans << endl;
}