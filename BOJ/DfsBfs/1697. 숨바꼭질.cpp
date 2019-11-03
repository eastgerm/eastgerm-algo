//
// Created by kimdong on 2018-08-30.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

struct time {
    int vertex;
    int cnt;
};

int N = 0, K = 0;
queue<time> prior;
bool visit[100001] = { false };
time t;

void input();
void choice(time t);
int bfs();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    cout << bfs() << endl;

    return 0;
}

void input() {
    cin >> N >> K;
}

void choice(time t) {
    int a = t.vertex;
    int c = t.cnt;
    visit[a] = true;

    if (a - 1 >= 0 && !visit[a - 1])
        prior.push({ a - 1,c + 1 });
    if (a + 1 <= 100000 && !visit[a + 1])
        prior.push({ a + 1,c + 1 });
    if (2 * a <= 100000 && !visit[2 * a])
        prior.push({ 2 * a,c + 1 });
}

int bfs() {
    prior.push({ N, 0 });
    while (!prior.empty()) {
        if (prior.front().vertex == K)
            return prior.front().cnt;
        choice(prior.front());
        prior.pop();
    }
    return -1;
}