//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> road;
int ans;

void input();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    road.assign(N, 0);
    for (int i = 0; i < N; i++) cin >> road[i];
}

void output() {
    int head, tail;
    for (int start = 0; start < N - 1; start++) {
        head = road[start];
        tail = -1;
        for (int finish = start + 1; finish < N; finish++) {
            if (road[finish - 1] >= road[finish]) {
                tail = road[finish - 1];
                break;
            } else tail = road[finish];
        }
        if (ans < tail - head) ans = tail - head;
    }
    cout << ans << '\n';
}