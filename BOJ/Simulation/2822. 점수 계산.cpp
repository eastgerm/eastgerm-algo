//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct result{
    int idx;
    int score;
};

bool compare(result a, result b){return a.score > b.score;}

vector<result> board(8,{0,0});
int totalScore = 0;
vector<int> ans;

void input();
void choice();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    choice();
    output();

    return 0;
}

void input(){
    for(int i=0; i<8; i++) cin >> board[i].score, board[i].idx = i+1;
}
void choice(){
    sort(board.begin(),board.end(),compare);
    for(int i=0; i<5; i++) totalScore += board[i].score, ans.push_back(board[i].idx);
    sort(ans.begin(),ans.end());
}
void output(){
    cout << totalScore << '\n';
    for(int i=0; i<5; i++) cout << ans[i] << ' ';
    cout << '\n';
}