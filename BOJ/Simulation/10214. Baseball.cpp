//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int T;

void inputT();
void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) func();
    return 0;
}

void inputT() {
    cin >> T;
}
void func() {
    int Y = 0, K = 0;
    int a,b;
    for(int i=0; i<9; i++) cin >> a >> b, Y += a, K += b;
    if(Y > K) cout << "Yonsei\n";
    else if(Y < K) cout << "Korea\n";
    else cout << "Draw\n";
}