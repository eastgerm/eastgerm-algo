//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N,M;
int startLen;
vector<string> map;

void input();
int square();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    startLen = N < M ? N : M;
    map.assign(N,"");
    for(int i=0; i<N; i++) cin >> map[i];
}
int square() {
    for(int len=startLen; len>1; len--)
        for(int i=0; i<=N-len; i++)
            for(int j=0; j<=M-len; j++) if(map[i][j] == map[i][j+len-1] && map[i][j] == map[i+len-1][j] && map[i][j] == map[i+len-1][j+len-1]) return len*len;
    return 1;
}
void output() {
    cout << square() << '\n';
}