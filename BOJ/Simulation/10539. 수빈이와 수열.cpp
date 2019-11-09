//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int N;

void inputN();
void input();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputN();
    input();
    return 0;
}

void inputN() {
    cin >> N;
}
void input() {
    int prevSum = 0;
    for(int i=1; i<=N; i++) {
        int n; cin >> n;
        cout << i*n - prevSum << ' ';
        prevSum = i*n;
    }
}