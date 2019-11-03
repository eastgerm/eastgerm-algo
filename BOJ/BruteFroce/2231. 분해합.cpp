//
// Created by kimdong on 2019-05-31.
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
    for(int i=1; i<=1000000; i++) {
        int res = i;
        int temp = i;
        while(temp) {
            res += temp%10;
            temp /= 10;
        }
        if(res == N) return i;
    }
    return 0;
}
void output() {
    cout << result() << '\n';
}