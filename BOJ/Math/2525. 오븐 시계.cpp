//
// Created by kimdong on 2019-06-04.
//

#include <iostream>
using namespace std;

int H,M,T;

void input();
int endTime();
void output();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> H >> M >> T;
}
int endTime() {
    return (H*60 + M + T) % 1440;
}
void output(){
    int endT = endTime();
    cout << endT/60 << ' ' << endT%60 << '\n';
}