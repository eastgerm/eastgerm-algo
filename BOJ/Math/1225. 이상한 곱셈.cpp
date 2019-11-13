//
// Created by kimdong on 2019-11-13.
//

#include <iostream>
#include <string>

using namespace std;

string A, B;

void input();

long long newMulti();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B;
}

long long newMulti() {
    long long ans = 0;
    int aLen = A.length();
    int bLen = B.length();
    for (int i = 0; i < aLen; i++)
        for (int j = 0; j < bLen; j++) ans += (A[i] - '0') * (B[j] - '0');
    return ans;
}

void output() {
    cout << newMulti() << '\n';
}