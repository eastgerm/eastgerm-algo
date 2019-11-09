//
// Created by kimdong on 2019-05-15.
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
vector<vertex> bowl;

bool compare(vertex a,vertex b) {
    if(a.y != b.y) return a.y < b.y;
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
    bowl.assign(N,{0,0});
    for(int i=0; i<N; i++) cin >> bowl[i].x >> bowl[i].y;
}
void output() {
    sort(bowl.begin(),bowl.end(),compare);
    for(int i=0; i<N; i++) cout << bowl[i].x << ' ' << bowl[i].y << '\n';
}