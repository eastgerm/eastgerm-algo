//
// Created by kimdong on 2018-11-14.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
int M = 0;

void input();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    output();

    return 0;
}

void input() {
    cin >> N >> M;
}

void output() {
    cout << N*M - 1 << endl;
}