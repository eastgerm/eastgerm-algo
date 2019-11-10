//
// Created by kimdong on 2019-05-24.
//

#include <iostream>
using namespace std;

int N,K;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
    int a,b;
    for(int i=0; i<N; i++) cin >> a >> b;
}
void output() {
    cout << "비와이\n";
}