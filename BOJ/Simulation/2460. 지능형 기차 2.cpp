//
// Created by kimdong on 2019-05-24.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int res = -1;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    int out,in;
    int now = 0;
    for(int i=0; i<10; i++) {
        cin >> out >> in;
        now -= out, now += in;
        res = MAX(res,now);
    }
}
void output() {
    cout << res << '\n';
}