//
// Created by kimdong on 2019-09-29.
//

#include <iostream>
#include <string>

using namespace std;

int N, M;
string S;
int MOD = 10000007;
int topHash = 8;
int ioiHash = 5;
int nowHash = 0;

void input();

void calculateTopAndIoiHash();

void shiftToLeftNowHash(int idx);

void initializeNowHash();

bool isPrevCharI(int idx);

int ioioi();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    calculateTopAndIoiHash();
    output();
    return 0;
}

void input() {
    cin >> N >> M >> S;
}

void calculateTopAndIoiHash() {
    for (int i = 1; i < N; i++) {
        topHash = (topHash * 4) % MOD;
        ioiHash = (ioiHash * 4 + 1) % MOD;
    }
}

void shiftToLeftNowHash(int idx) {
    nowHash = (2 * nowHash) % MOD;
    if (S[idx] == 'I') nowHash = (nowHash + 1) % MOD;
}

void initializeNowHash() {
    for (int i = 0; i < 2 * N; i++) shiftToLeftNowHash(i);
}

bool isPrevCharI(int idx) {
    return idx > 2 * N && S[idx - (2 * N + 1)] == 'I';
}

int ioioi() {
    int ans = 0;
    initializeNowHash();
    for (int i = 2 * N; i < M; i++) {
        shiftToLeftNowHash(i);
        if (isPrevCharI(i)) nowHash -= topHash;
        if (nowHash < 0) nowHash += MOD;
        if (nowHash == ioiHash) ans++;
    }
    return ans;
}

void output() {
    cout << ioioi() << '\n';
}