//
// Created by kimdong on 2019-06-19.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N,M;
vector<string> map;

void input();
int check(vector<string> chess);
int reDrawing();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    map.assign(N,"");
    for(int i=0; i<N; i++) cin >> map[i];
}
int check(vector<string> chess) {
    int cnt = 0;
    vector<string> norm(8,"");
    for(int i=0; i<8; i++) i%2 == 0 ? norm[i] = "WBWBWBWB" : norm[i] = "BWBWBWBW";
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++) if(chess[i][j] != norm[i][j]) cnt++;
    return cnt < 32 ? cnt : 64 - cnt;
}
int reDrawing() {
    int ans = 987654321;
    for(int i=0; i<=N-8; i++)
        for(int j=0; j<=M-8; j++) {
            vector<string> chess(8,"");
            for(int ti=0; ti<8; ti++)
                chess[ti] = map[i+ti].substr(j,8);
            int cnt = check(chess);
            ans = ans < cnt ? ans : cnt;
        }
    return ans;
}
void output() {
    cout << reDrawing() << '\n';
}