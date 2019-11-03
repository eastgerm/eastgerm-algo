//
// Created by kimdong on 2019-08-23.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;

void input();

vector<string> star(int exp);

string space(int n);

void canvas();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    canvas();
    return 0;
}

void input() {
    cin >> N;
}

vector<string> star(int exp) {
    vector<string> res;
    if (exp == 3) {
        res.assign(3, "***");
        res[1] = "* *";
        return res;
    }
    int prevExp = exp / 3;
    vector<string> prev = star(prevExp);
    res.assign(exp, "");
    for (int i = 0; i < exp; i++) {
        res[i] += prev[i % prevExp];
        i / prevExp == 1 ? res[i] += space(prevExp) : res[i] += prev[i % prevExp];
        res[i] += prev[i % prevExp];
    }
    return res;
}

string space(int n) {
    string res;
    string norm = " ";
    for (int i = 0; i < n; i++) res += norm;
    return res;
}

void canvas() {
    vector<string> res = star(N);
    for (int i = 0; i < N; i++) cout << res[i] << '\n';
}