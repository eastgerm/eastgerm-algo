//
// Created by kimdong on 2019-10-29.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string P;
int K;

void input();

void output();

int customMod(int n);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> P >> K;
}

int customMod(int n) {
    int mod = 0;
    int len = P.length();
    for (int i = 0; i < len; i++) mod = (mod * 10 + (P[i] - '0')) % n;
    return mod;
}

void output() {
    for (int i = 2; i < K; i++) {
        if (customMod(i)) continue;
        cout << "BAD " << i << '\n';
        return;
    }
    cout << "GOOD\n";
}