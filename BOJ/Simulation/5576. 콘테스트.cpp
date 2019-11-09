//
// Created by kimdong on 2019-05-05.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> W(10,0);
vector<int> K(10,0);
int wScore = 0, kScore = 0;

void input();
void score();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    score();
    output();
    return 0;
}

void input() {
    for(int i=0; i<10; i++) cin >> W[i];
    for(int i=0; i<10; i++) cin >> K[i];
}
void score() {
    sort(W.begin(),W.end());
    sort(K.begin(),K.end());
    wScore = W[7]+W[8]+W[9];
    kScore = K[7]+K[8]+K[9];
}
void output() {
    cout << wScore << ' ' << kScore << '\n';
}