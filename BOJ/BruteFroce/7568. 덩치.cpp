//
// Created by kimdong on 2019-06-19.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct spec {
    int weight;
    int height;
    int idx;
    int order;
};

int N;
vector<spec> member;

bool compare(spec a, spec b) {
    return a.weight == b.weight ? a.height > b.height : a.weight > b.weight;
}
bool order(spec a, spec b) {
    return a.idx < b.idx;
}
void input();
void count();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    count();
    output();
    return 0;
}

void input() {
    cin >> N;
    member.assign(N,{0,0,0,0});
    for(int i=0; i<N; i++) cin >> member[i].weight >> member[i].height, member[i].idx = i;
}
void count() {
    sort(member.begin(),member.end(),compare);
    for(int i=0; i<N; i++) {
        int cnt = 0;
        for(int j=0; j<i; j++) if(member[j].weight > member[i].weight && member[j].height > member[i].height) cnt++;
        member[i].order = cnt + 1;
    }
    sort(member.begin(),member.end(),order);
}
void output() {
    for(int i=0; i<N; i++) cout << member[i].order << ' ';
    cout << '\n';
}