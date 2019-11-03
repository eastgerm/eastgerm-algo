//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct int2 {
    int level;
    int idx;
};

bool compare(int a, int b) {return a > b;}

int T;
int N,IDX;
queue<int2> Q;
vector<int> prior;

void inputT();
void input();
int bomb();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int i=0; i<T; i++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> N >> IDX;
    int importance;
    for(int i=0; i<N; i++) cin >> importance, prior.push_back(importance), Q.push({importance,i});
}
int bomb() {
    int ans = 0;
    sort(prior.begin(),prior.end(),compare);
    int priorIdx = 0;
    while(!Q.empty()) {
        int2 item = Q.front();
        if(item.level >= prior[priorIdx] && item.idx == IDX) return ++ans;
        if(item.level >= prior[priorIdx]) Q.pop(), priorIdx++, ans++;
        else Q.pop(), Q.push(item);
    }
}
void output() {
    cout << bomb() << '\n';
    prior.clear();
    while(!Q.empty()) Q.pop();
}