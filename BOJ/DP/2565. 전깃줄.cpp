//
// Created by kimdong on 2019-11-14.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define max(x, y) ((x)>(y)?(x):(y))

struct wire {
    int start;
    int end;
};
struct int2 {
    int ok;
    vector<vector<wire> > wires;
};

int N;
vector<wire> wires;
vector<int2> dp;

bool compare(wire a, wire b) {
    return a.start < b.start;
}

void input();

void fillDp();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    fillDp();
    output();
    return 0;
}

void input() {
    cin >> N;
    wires.assign(N, {0, 0});
    for (int i = 0; i < N; i++) cin >> wires[i].start >> wires[i].end;
    sort(wires.begin(), wires.end(), compare);
}

void fillDp() {
    dp.assign(N, {1, vector<vector<wire> >(1, vector<wire>())});
    dp[0].wires[0].push_back(wires[0]);

//    for (int i = 1; i <= N - 1; i++) {
//        dp[i].wires[0].push_back(wires[i]);
//
//        for (int j = 0; j < i; j++) {
//            int len = dp[j].wires.size();
//
//            for (int ww = 0; ww < len; ww++) {
//                vector<wire> nowWires;
//                int wwLen = dp[j].ok;
//                for (int k = 0; k < wwLen; k++) {
//                    if (!isCross(dp[j].wires[ww][k], wires[i])) nowWires.push_back(dp[j].wires[ww][k]);
//
//                    if (k == wwLen - 1) {
//                        int nowValue = nowWires.size() + 1;
//
//                        if (nowValue == 1) break;
//                        else if (nowValue == dp[i].ok) {
//                            nowWires.push_back(wires[i]);
//                            dp[i].wires.push_back(nowWires);
//                        } else if (nowValue > dp[i].ok) {
//                            nowWires.push_back(wires[i]);
//                            vector<vector<wire> > newWires(1, nowWires);
//                            dp[i] = {nowValue, newWires};
//                        }
//                    }
//                }
//            }
//        }
//    }
}

void output() {
    int maxDp = 0;
    for (int i = 0; i < N; i++) {
        cout << dp[i].ok << ' ' << dp[i].wires.size() << '\n';
        maxDp = max(maxDp, dp[i].ok);
    }
    cout << N - maxDp << '\n';
}