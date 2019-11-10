//
// Created by kimdong on 2019-05-30.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N,K;
queue<int> prior;
vector<int> ans;

void input();
void jose();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    jose();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
}
void jose() {
    for(int i=1; i<=N; i++) prior.push(i);
    int cnt = 0;
    while(!prior.empty()) {
        int now = prior.front();
        cnt++;
        prior.pop();
        if(cnt%K == 0) ans.push_back(now);
        else prior.push(now);
    }
}
void output() {
    cout << '<';
    for(int i=0; i<N; i++) i!=N-1 ? cout << ans[i] << ", " : cout << ans[i] << ">\n";
}