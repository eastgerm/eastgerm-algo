//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> a,b;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N;
    a.assign(46,0);
    b.assign(46,0);
    a[0] = 1, b[1] = 1;
}
void output() {
    for(int i=2; i<=N; i++) a[i] = a[i-2] + a[i-1], b[i] = b[i-2] + b[i-1];
    cout << a[N] << ' ' << b[N] << '\n';
}