//
// Created by kimdong on 2019-08-27.
//

#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> speeds;

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
    cin >> N;
    for (int i = 0; i < N; i++) {
        int trash, newSpeed;
        cin >> trash >> newSpeed;
        speeds.push_back(newSpeed);
    }
}

int group() {
    int ans = 1;
    int headSpeed = speeds[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        int newSpeed = speeds[i];
        if (newSpeed <= headSpeed) headSpeed = newSpeed, ans++;
    }
    return ans;
}

void output() {
    cout << group() << '\n';
}