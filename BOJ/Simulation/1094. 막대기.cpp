//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N = 0;

void input();
int calcul();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    output();

    return 0;
}

void input() {
    cin >> N;
}
int calcul() {
    int cnt = 0;
    while (N) {
        if (N % 2)
            cnt++;
        N /= 2;
    }
    return cnt;
}
void output() {
    cout << calcul() << endl;
}