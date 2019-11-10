//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N,K;
vector<vector<int>> table;

void input();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    return 0;
}

void input() {
    int ans = 0;
    cin >> N >> K;
    table.assign(2,vector<int>(7,0));
    for(int tc=0; tc<N; tc++) {
        int i,j;
        cin >> i >> j;
        table[i][j]++;
    }
    for(int i=0; i<2; i++)
        for(int j=1; j<=6; j++) if(table[i][j]) table[i][j]%K == 0 ? ans += table[i][j]/K : ans += (table[i][j]/K)+1;
    cout << ans << '\n';
}