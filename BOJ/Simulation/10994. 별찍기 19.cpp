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

string charStar(int n);

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
    if (n == 1) {
        res.assign(1, "*");
        return res;
    }
    int row = 4 * n - 3;
    int prevN = n - 1;
    int prevRow = row - 4;
    vector<string> prev = star(prevN);
    res.push_back(charStar(row));
    res.push_back("*" + space(row - 2) + "*");
    for (int i = 0; i < prevRow; i++) res.push_back("* " + prev[i] + " *");
    res.push_back("*" + space(row - 2) + "*");
    res.push_back(charStar(row));
    return res;
}

string charStar(int n) {
    string res;
    string norm = "*";
    for (int i = 0; i < n; i++) res += norm;
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
    int row = 4 * N - 3;
    for (int i = 0; i < row; i++) cout << res[i] << '\n';
}