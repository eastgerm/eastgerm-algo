//
// Created by kimdong on 2018-05-09.
//

#include <iostream>
using namespace std;

int N = 0;

int zero[501] = { 0 };
int cnt = 0;
int five = 0;
int temp = 0;

void input();
void countZero();

int main()
{
    input();
    countZero();

    return 0;
}

void input() {
    cin >> N;
}

void countZero() {
    for (int i = 1; i <= N; i++) {
        temp = i;

        if (i % 5 == 0) {
            while (temp % 5 == 0) {
                temp /= 5;
                five++;
            }
            cnt += five; five = 0;
            zero[i] = cnt;
        }
        else
            zero[i] = zero[i - 1];
    }

    cout << zero[N];
}