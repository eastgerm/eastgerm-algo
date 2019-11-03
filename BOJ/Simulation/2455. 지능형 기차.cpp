//
// Created by kimdong on 2018-09-29.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int out[4];
int in[4];

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
    for (int i = 0; i < 4; i++)
        cin >> out[i] >> in[i];
}

int calcul() {
    int max = -1;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum -= out[i];
        sum += in[i];
        max = max > sum ? max : sum;
    }
    return max;
}

void output() {
    cout << calcul() << endl;
}