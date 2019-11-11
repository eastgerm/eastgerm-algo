//
// Created by kimdong on 2019-11-11.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    int start;
    int end;
};

int N;
vector<Time> table;

bool compare(Time a, Time b) {
    return a.end == b.end ? a.start < b.start : a.end < b.end;
}

void input();

void sortByGreedy();

int meeting();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        table.push_back({start, end});
    }
    sortByGreedy();
}

void sortByGreedy() {
    sort(table.begin(), table.end(), compare);
}

int meeting() {
    int ans = 1;
    Time nowTime = table[0];
    for (int i = 1; i < N; i++) {
        Time nextTime = table[i];
        if(nextTime.start < nowTime.end) continue;
        nowTime = nextTime;
        ans++;
    }
    return ans;
}

void output() {
    cout << meeting() << '\n';
}