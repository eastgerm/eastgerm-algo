//
// Created by kimdong on 2019-11-14.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
string head = "IJKLABCDEFGH";
string tail = "6789012345";
vector<string> ganzi(60, "00");

void input();

void fillGanzi();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    fillGanzi();
}

void fillGanzi() {
    for (int i = 0; i < 60; i++) {
        ganzi[i][0] = head[i % 12];
        ganzi[i][1] = tail[i % 10];
    }
}

void output() {
    cout << ganzi[N % 60] << '\n';
}
