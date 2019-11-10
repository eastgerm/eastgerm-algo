//
// Created by kimdong on 2019-07-13.
//

#include <iostream>
using namespace std;

int C,K,P;

void input();
int wine();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> C >> K >> P;
}
int wine() {
    int ans = 0;
    for(int i=1; i<=C; i++) ans += (K*i + P*i*i);
    return ans;
}
void output() {
    cout << wine() << '\n';
}