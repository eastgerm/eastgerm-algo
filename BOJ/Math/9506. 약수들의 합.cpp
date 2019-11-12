//
// Created by kimdong on 2019-11-12.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N;

void func();

void input();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while (true) {
        input();
        if(N == -1) return;
        output();
    }
}

void input() {
    cin >> N;
}

void output() {
    vector<int> nums;
    for (int i = 1; i * i <= N; i++) {
        if (N % i != 0) continue;
        nums.push_back(i);
        nums.push_back(N / i);
    }

    int sum = 0;
    int len = nums.size();
    string result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < len - 1; i++) sum += nums[i];

    if(sum != N) {
        cout << N << " is NOT perfect.\n";
        return;
    }

    cout << N << " = ";
    for (int i = 0; i < len - 1; i++) {
        if (i == len - 2) cout << nums[i] << '\n';
        else cout << nums[i] << " + ";
    }
}