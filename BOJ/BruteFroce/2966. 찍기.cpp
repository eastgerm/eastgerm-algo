//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct person {
    int score;
    string name;
};

int N;
string s;

bool compare(person a, person b) {
    return a.score > b.score;
}
void input();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> s;
}
void output() {
    char a[3] = {'A','B','C'};
    char b[4] = {'B','A','B','C'};
    char c[6] = {'C','C','A','A','B','B'};
    vector<person> board(3,{0,""});
    board[0].name = "Adrian";
    board[1].name = "Bruno";
    board[2].name = "Goran";
    int len = s.length();
    for(int i=0; i<len; i++) {
        if(s[i] == a[i%3]) board[0].score++;
        if(s[i] == b[i%4]) board[1].score++;
        if(s[i] == c[i%6]) board[2].score++;
    }
    sort(board.begin(),board.end(),compare);
    cout << board[0].score << '\n';
    for(int i=0; i<3; i++)
        if(board[i].score == board[0].score) cout << board[i].name << '\n';
}