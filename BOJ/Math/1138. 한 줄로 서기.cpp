//
// Created by kimdong on 2019-10-14.
//

#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> info;
vector<bool> visited;

bool isImpossible(int idx, vector<int> nums) {
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++) if (nums[i] > idx) cnt++;
    return cnt != info[idx];
}

void input();

void dfs(vector<int> nums);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(vector<int>());
    return 0;
}

void input() {
    cin >> N;
    info.assign(N, 0);
    visited.assign(N, false);
    for (int i = 0; i < N; i++) cin >> info[i];
}

void dfs(vector<int> nums) {
    if (nums.size() == N) {
        for (int i = 0; i < N; i++) cout << nums[i] + 1 << ' ';
        return;
    }
    for (int i = 0; i < N; i++) {
        if (visited[i]) continue;
        if (isImpossible(i, nums)) continue;
        nums.push_back(i);
        visited[i] = true;
        dfs(nums);
        visited[i] = false;
        nums.pop_back();
    }
}
