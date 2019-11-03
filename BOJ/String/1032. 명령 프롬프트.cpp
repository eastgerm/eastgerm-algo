//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
vector<string> cmds;

void input();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    cmds.assign(N, "");
    for (int i = 0; i < N; i++) cin >> cmds[i];
}

void output() {
    int len = cmds[0].length();
    for (int i = 0; i < len; i++) {
        bool possi = true;
        for (int j = 1; j < N; j++)
            if (cmds[j][i] != cmds[0][i]) possi = false;
        possi ? cout << cmds[0][i] : cout << '?';
    }
    cout << '\n';
}