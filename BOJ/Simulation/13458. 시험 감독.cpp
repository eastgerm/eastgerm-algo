//
// Created by kimdong on 2018-09-19.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N = 0;
int A[1000000] = { 0 };
int B = 0;
int C = 0;
long cnt = 0;

void input();
void calcul();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    calcul();
    output();

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> B >> C;
}

void calcul() {
    for (int i = 0; i < N; i++) {
        if (A[i] - B <= 0)
            ;
        else {
            A[i] -= B;
            if (A[i] % C)
                cnt += ((A[i] / C) + 1);
            else
                cnt += (A[i] / C);
        }
    }
}

void output() {
    cout << cnt + N << endl;
}