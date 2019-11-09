//
// Created by kimdong on 2019-06-08.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct info {
    string name;
    int g;
    int y;
    int s;
};

int N;
vector<info> board;

bool compare(info a, info b) {
    if(a.g == b.g) {
        if(a.y == b.y) {
            if(a.s == b.s) {
                return a.name < b.name;
            }
            return a.s > b.s;
        }
        return a.y < b.y;
    }
    return a.g > b.g;
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
    board.assign(N,{"",0,0,0});
    for(int i=0; i<N; i++) cin >> board[i].name >> board[i].g >> board[i].y >> board[i].s;
}
void output() {
    sort(board.begin(),board.end(),compare);
    for(int i=0; i<N; i++) cout << board[i].name << '\n';
}