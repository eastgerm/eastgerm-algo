//
// Created by kimdong on 2019-06-02.
//

#include <iostream>
using namespace std;

int h,m,s;
int t;

void input();
int makeT();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> h >> m >> s >> t;
}
int makeT() {
    return (h*3600 + m*60 + s + t) % 86400;
}
void output() {
    int newT = makeT();
    cout << newT / 3600 << ' ';
    newT %= 3600;
    cout << newT / 60 << ' ';
    newT %= 60;
    cout << newT << '\n';
}