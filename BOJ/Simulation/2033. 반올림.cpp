//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
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
    int norm = 10;
    while(N > norm) {
        N = N%norm >= norm/2 ? (N/norm)*norm + norm : (N/norm)*norm;
        norm *= 10;
    }
    return N;
}
void output() {
    cout << result() << '\n';
}