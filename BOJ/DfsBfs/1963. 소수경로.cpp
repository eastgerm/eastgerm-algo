//
// Created by kimdong on 2018-08-30.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct cnt{
    int vertex;
    int c;
};

bool p[10000] = { false };
int T = 0;
int a = 0, b = 0;
queue<cnt> prior;
bool visit[10000] = { false };
int num1 = 0, num2 = 0, num3 = 0, num4 = 0;

void prime();
void inputT();
void inputab();
void solve();
void choice(cnt A);
int bfs();
void filter(int number);

int main()
{
    ios_base::sync_with_stdio(false);
    solve();

    return 0;
}

void prime() {
    for (int i = 2; i < 10000; i++) {
        if (!p[i]) {
            for (int j = i + i; j < 10000; j += i)
                p[j] = true;
        }
    }
}

void inputT() {
    cin >> T;
}

void inputab() {
    cin >> a >> b;
}

void solve() {
    prime();
    inputT();
    int res = 0;

    for (int tc = 0; tc < T; tc++) {
        inputab();
        res = bfs();

        if (res == -1)
            cout << "Impossible" << endl;
        else
            cout << res << endl;

        for (int i = 0; i < 10000; i++)
            visit[i] = false;
        while (!prior.empty()) {
            prior.pop();
        }
    }
}

void choice(cnt A) {
    int num = A.vertex; int count = A.c;
    visit[num] = true;
    filter(num);
    for (int i = 0; i <= 9; i++) {
        if (1000 * i + num1 > 1000 && !p[1000 * i + num1] && !visit[1000 * i + num1])
            prior.push({ 1000 * i + num1,count + 1 });
        if (!p[100 * i + num2] && !visit[100 * i + num2])
            prior.push({ 100 * i + num2,count + 1 });
        if (!p[10 * i + num3] && !visit[10 * i + num3])
            prior.push({ 10 * i + num3,count + 1 });
        if (!p[i + num4] && !visit[i + num4])
            prior.push({ i + num4,count + 1 });
    }
}

int bfs() {
    prior.push({ a,0 });
    while (!prior.empty()) {
        if (prior.front().vertex == b)
            return prior.front().c;
        choice(prior.front());
        prior.pop();
    }
    return -1;
}

void filter(int number) {
    int number1 = number;

    int t1 = 0; int t2 = 0; int t3 = 0; int t4 = 0;
    t4 = number % 10; number /= 10;
    t3 = (number % 10) * 10; number /= 10;
    t2 = (number % 10) * 100; number /= 10;
    t1 = number * 1000;

    num1 = number1 - t1;
    num2 = number1 - t2;
    num3 = number1 - t3;
    num4 = number1 - t4;
}