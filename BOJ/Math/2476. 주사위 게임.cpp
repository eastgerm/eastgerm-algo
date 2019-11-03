//
// Created by kimdong on 2019-06-08.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> dice;
int ans;

void inputN();
void input();
void grading();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputN();
    for(int i=0; i<N; i++) input(), grading();
    output();
    return 0;
}

void inputN() {
    cin >> N;
    dice.assign(3,0);
}
void input() {
    cin >> dice[0] >> dice[1] >> dice[2];
}
void grading() {
    sort(dice.begin(),dice.end());
    int point = 0;
    if(dice[0] == dice[2]) point = 10000 + dice[0]*1000;
    else if(dice[1] == dice[0] || dice[1] == dice[2]) point = 1000 + dice[1]*100;
    else point = dice[2]*100;
    ans = point > ans ? point : ans;
}
void output() {
    cout << ans << '\n';
}