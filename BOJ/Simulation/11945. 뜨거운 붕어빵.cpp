//
// Created by kimdong on 2019-11-13.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N, M;
vector<string> map;

void input();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    map.assign(N, "");
    for (int i = 0; i < N; i++) cin >> map[i];
}

void output() {
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) cout << map[i][j];
        cout << '\n';
    }
}