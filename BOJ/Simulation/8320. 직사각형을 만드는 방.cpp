//
// Created by kimdong on 2019-06-16.
//

#include <iostream>
using namespace std;

int N;

void input();
int result();
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
int result() {
    if(N == 1) return 1;
    int ans = 0;
    for(int garo=1; garo<=N/2; garo++)
        for(int sero=N/garo; sero >= garo; sero--) ans++;
    return ans;
}
void output() {
    cout << result() << '\n';
}