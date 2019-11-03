//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
using namespace std;

int N = 0;
int M = 0;
bool broken[10] = { false, };
int C = 0;

void input();
int findC();
void filter(int a, int mem[]);
void solve();
int countC(int c);

int main()
{
    ios_base::sync_with_stdio(false);
    solve();

    return 0;
}

void input() {
    cin >> N;
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> C;
        broken[C] = true;
    }
}

int findC() {
    int down = N; int up = N;
    int d[10] = { 0 };
    int u[10] = { 0 };

    while (down >= 0 || up <= 1000000) {
        for (int i = 0; i < 10; i++)
            d[i] = u[i] = -1;

        filter(down, d);
        for (int i = 0; d[i] != -1; i++) {
            if (broken[d[i]] == true)
                break;
            if (d[i + 1] == -1)
                return down;
        }

        filter(up, u);
        for (int i = 0; u[i] != -1; i++) {
            if (broken[u[i]] == true)
                break;
            if (u[i + 1] == -1)
                return up;
        }
        down--; up++;
    }

    return -1;
}

void filter(int a, int mem[]) {
    if (a == 0)
        mem[0] = 0;
    else {
        for (int i = 0; a > 0; a /= 10) {
            mem[i] = a % 10;
            i++;
        }
    }
}

void solve() {
    int res = 0; int a = 0;

    input();
    res = N - 100;
    if (res < 0)
        res = -res;
    C = findC();

    if (C == -1)
        cout << res << endl;
    else {
        a = C - N;
        if (a < 0)
            a = -a;
        a += countC(C);

        if (a < res)
            res = a;

        cout << res << endl;
    }
}

int countC(int c) {
    int digit = 0;

    if (c == 0)
        return 1;
    else {
        while (c > 0) {
            c /= 10;
            digit++;
        }
        return digit;
    }
}