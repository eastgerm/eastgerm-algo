//
// Created by kimdong on 2019-07-14.
//

#include <iostream>
#include <vector>
using namespace std;

int N;

void input();
int three();
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
int three() {
    if(N < 9 || N%3) return 0;
    int ans = 0;
    N /= 3;
    N -= 2;
    for(int i=1; i<=N; i++) ans += i;
    return ans;
}
void output() {
    cout << three() << '\n';
}