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
    if(n == 2) {
        res.assign(3, "** **");
        res[1] = " *** ";
        return res;
    }
    for (int i = 0; i < n; i++) {
        if(i == 0) res.push_back(charStar(n) + space(2 * n - 3) + charStar(n));
        else if(i == n-1) res.push_back(space(i) + "*" + space(n - 2) + "*" + space(n - 2) + "*");
        else res.push_back(space(i) + "*" + space(n - 2) + "*" + space(2 * (n - i) - 3) + "*" + space(n - 2) + "*");
    }
    for (int i = n - 2; i >= 0; i--) res.push_back(res[i]);
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
    int len = res.size();
    for (int i = 0; i < len; i++) cout << res[i] << '\n';
}