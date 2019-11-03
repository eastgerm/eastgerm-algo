//
// Created by kimdong on 2019-08-23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 101

struct link {
    int person1;
    int person2;
};

int N, M;
vector<link> cmds;
vector<vector<int>> score;

bool compare(link a, link b) {
    return a.person1 == b.person1 ? a.person2 < b.person2 : a.person1 < b.person1;
}

void input();

void preprocess();

int kebinBacon();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    preprocess();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    score.assign(N + 1, vector<int>(N + 1, INF));
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a < b ? cmds.push_back({a, b}) : cmds.push_back({b, a});
    }
}

void preprocess() {
    sort(cmds.begin(), cmds.end(), compare);
    for (int i = 0; i < M; i++) {
        int prevA = i == 0 ? -1 : cmds[i - 1].person1, prevB = i == 0 ? -1 : cmds[i - 1].person2;
        int nowA = cmds[i].person1, nowB = cmds[i].person2;
        if (prevA == nowA && prevB == nowB) continue;
        score[nowA][nowB] = 1, score[nowB][nowA] = 1;
    }
}

int kebinBacon() {
    int ans = 0;
    int res = INF;
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (i != j && score[i][j] > score[i][k] + score[k][j])
                    score[i][j] = score[i][k] + score[k][j];
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        int tempRes = 0;
        for (int j = 1; j <= N; j++)
            if (i != j) tempRes += score[i][j];
        if (tempRes < res) res = tempRes, ans = i;
    }
    return ans;
}

void output() {
    cout << kebinBacon() << '\n';
//    for (int i = 1; i <= N; i++) {
//        int tempRes = 0;
//        for (int j = 1; j <= N; j++) cout << score[i][j] << ' ';
//        cout << endl;
//    }
}