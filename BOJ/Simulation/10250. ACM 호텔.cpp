//
// Created by kimdong on 2019-10-27.
//

#include <iostream>

using namespace std;

int T;
int H, W, N;

void inputT();

void ACM();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for (int tc = 0; tc < T; tc++) ACM();
    return 0;
}

void inputT() {
    cin >> T;
}

void ACM() {
    cin >> H >> W >> N;
    int head = N%H != 0 ? N % H : H;
    int tail = (N - 1) / H + 1;


    cout << head;
    if(tail < 10) cout << '0' << tail;
    else cout << tail;
    cout << '\n';
}