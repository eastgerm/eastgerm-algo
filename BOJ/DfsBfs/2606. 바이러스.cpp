//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
int V;
vector<vector<int>> network;
vector<bool> chart;
int ans = 0;

void input();
void spread(int n);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    spread(1);
    output();
    return 0;
}

void input() {
    cin >> N >> V;
    network.assign(N+1,vector<int>());
    chart.assign(N+1,false);
    for(int i=0; i<V; i++) {
        int a,b; cin >> a >> b;
        network[a].push_back(b);
        network[b].push_back(a);
    }
}
void spread(int n) {
    chart[n] = true;
    int len = network[n].size();
    for(int i=0; i<len; i++)
        if(!chart[network[n][i]]) spread(network[n][i]);
}
void output() {
    for(int i=2; i<=N; i++) if(chart[i]) ans++;
    cout << ans << '\n';
}
