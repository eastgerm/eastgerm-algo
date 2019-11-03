//
// Created by kimdong on 2019-05-24.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> res;

void input();
int score();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    res.assign(N,0);
    for(int i=0; i<N; i++) cin >> res[i];
}
int score() {
    int ans = 0;
    int bonus = 0;
    for(int i=0; i<N; i++) res[i] ? ans += (++bonus) : bonus = 0;
    return ans;
}
void output() {
    cout << score() << '\n';
}