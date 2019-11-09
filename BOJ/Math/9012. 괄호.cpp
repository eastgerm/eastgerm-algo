//
// Created by kimdong on 2018-03-20.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int T = 0;
string s;

void inputT();
void solve();
void input();
bool check();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    inputT();
    solve();

    return 0;
}

void inputT() {
    cin >> T;
}
void solve() {
    for (int tc = 1; tc <= T; tc++) {
        input();
        output();
    }
}
void input() {
    cin >> s;
}

bool check() {
    vector<char> bowl;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            if (i == len - 1)
                return false;
            bowl.push_back('(');
        }
        else {
            if (bowl.empty())
                return false;
            bowl.pop_back();
        }
    }
    if (bowl.empty())
        return true;
    return false;
}

void output() {
    if (check())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}