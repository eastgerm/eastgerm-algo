//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
using namespace std;

int N,M;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
}
int result() {
    int ans = 0;
    int currentMoney = N, norm = M;
    ans += currentMoney;
    while(currentMoney >= norm) {
        currentMoney /= norm;
        ans += currentMoney;
    }
    return ans;
}
void output() {
    cout << result() << '\n';
}