//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int T;
string quiz;

void inputT();
void input();
int score();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> quiz;
}
int score() {
    int ans = 0;
    int len = quiz.length();
    int tempScore = 0;
    for(int i=0; i<len; i++) {
        quiz[i] == 'O' ? tempScore++ : tempScore = 0;
        ans += tempScore;
    }
    return ans;
}
void output() {
    cout << score() << '\n';
}