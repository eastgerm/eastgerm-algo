//
// Created by kimdong on 2019-06-02.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct vertex {
    int x;
    int y;
};

int N;
vector<vertex> vers;

bool compare(vertex a, vertex b) {
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    vers.assign(N,{0,0});
    for(int i=0; i<N; i++) cin >> vers[i].x >> vers[i].y;
}
void output() {
    sort(vers.begin(),vers.end(),compare);
    for(int i=0; i<N; i++) cout << vers[i].x << ' ' << vers[i].y << '\n';
}