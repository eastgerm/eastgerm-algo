//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> score, check;

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
    score.assign(N,vector<int>(3,0));
    check.assign(3,vector<int>(101,0));
    for(int i=0; i<N; i++)
        for(int j=0; j<3; j++) cin >> score[i][j], check[j][score[i][j]]++;
}
void output() {
    for(int i=0; i<N; i++) {
        int ans = 0;
        for(int j=0; j<3; j++)
            if(check[j][score[i][j]] == 1) ans += score[i][j];
        cout << ans << '\n';
    }
}