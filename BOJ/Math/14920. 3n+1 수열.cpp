//
// Created by kimdong on 2019-06-27.
//

#include <iostream>
#include <vector>
using namespace std;

int N;

void input();
int C();
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
int C() {
    if(N == 1) return 1;
    int nowC = N;
    for(int i=2; ; i++) {
        nowC%2 == 0 ? nowC /= 2 : nowC = 3*nowC + 1;
        if(nowC == 1) return i;
    }
}
void output() {
    cout << C() << '\n';
}