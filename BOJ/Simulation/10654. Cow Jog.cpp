//
// Created by kimdong on 2019-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

struct info {
    long long start;
    long long speed;
};

int N;
int T;
vector<info> cows;

void input();

int group();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> T;
    for (int i = 0; i < N; i++) {
        long long startPoint, newSpeed;
        cin >> startPoint >> newSpeed;
        cows.push_back({startPoint, newSpeed});
    }
}

int group() {
    int ans = 1;
    info headCow = cows[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        info newCow = cows[i];
        long long headFinish = headCow.start + T * headCow.speed;
        long long newFinish = newCow.start + T * newCow.speed;
        if (newCow.speed <= headCow.speed || headFinish > newFinish) headCow = {newCow.start, newCow.speed}, ans++;
    }
    return ans;
}

void output() {
    cout << group() << '\n';
}