//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int R,C;
vector<vector<char>> card;
int A,B;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> R >> C;
    card.assign(R,vector<char>());
    string s;
    for(int i=0; i<R; i++) {
        cin >> s;
        for(int j=0; j<C; j++) card[i].push_back(s[j]);
        for(int j=C-1; j>=0; j--) card[i].push_back(s[j]);
    }
    for(int i=R-1; i>=0; i--) card.push_back(card[i]);
    cin >> A >> B;
    card[A-1][B-1] = card[A-1][B-1] == '#' ? '.' : '#';
}
void output() {
    for(int i=0; i<2*R; i++) {
        for(int j=0; j<2*C; j++) cout << card[i][j];
        cout << '\n';
    }
}