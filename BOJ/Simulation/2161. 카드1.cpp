//
// Created by kimdong on 2019-06-19.
//

#include <iostream>
#include <queue>
using namespace std;

int N;

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
}
void output() {
    queue<int> Q;
    for(int i=1; i<=N; i++) Q.push(i);
    while(!Q.empty()) {
        cout << Q.front() << ' ';
        Q.pop();
        if(Q.empty()) return;
        Q.push(Q.front());
        Q.pop();
    }
}