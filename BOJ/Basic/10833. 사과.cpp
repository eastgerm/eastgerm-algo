//
// Created by kimdong on 2019-05-24.
//

#include <iostream>
using namespace std;

int N;
int sum = 0;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    int a,b;
    for(int i=0; i<N; i++) cin >> a >> b, sum += b%a;
}
void output() {
    cout << sum << '\n';
}