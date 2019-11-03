//
// Created by kimdong on 2019-08-23.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;

void input();

vector<string> star(int n);

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

vector<string> star(int n) {
    vector<string> res;
    if (n == 3) {
        res.assign(3, "  *  ");
        res[1] = " * * ";
        res[2] = "*****";
        return res;
    }
    int prevN = n / 2;
    vector<string> prev = star(prevN);
    res.assign(n, "");
    for (int i = 0; i < n; i++)
        res[i] = i < prevN ? space(prevN) + prev[i] + space(prevN) : prev[i % prevN] + space(1) + prev[i % prevN];
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