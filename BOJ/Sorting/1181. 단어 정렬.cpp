//
// Created by kimdong on 2019-06-08.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N;
vector<string> board;

bool compare(string a, string b) {
    if(a.length() == b.length()) return a < b;
    return a.length() < b.length();
}
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
    board.assign(N,"");
    for(int i=0; i<N; i++) cin >> board[i];
}
void output() {
    sort(board.begin(),board.end(),compare);
    for(int i=0; i<N; i++) {
        if(i > 0) {
            if(board[i-1] != board[i]) cout << board[i] << '\n';
        }
        else cout << board[i] << '\n';
    }
}