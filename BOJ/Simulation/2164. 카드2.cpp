//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <queue>
using namespace std;

int N;

void input();
int shuffle();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
int shuffle() {
    queue<int> card;
    for(int i=1; i<=N; i++) card.push(i);
    while(card.size() != 1) {
        card.pop();
        card.push(card.front());
        card.pop();
    }
    return card.front();
}
void output() {
    cout << shuffle() << '\n';
}