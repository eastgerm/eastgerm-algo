//
// Created by kimdong on 2018-08-29.
//

#include <iostream>
using namespace std;

int E = 0;
int S = 0;
int M = 0;

void input();
int ESM();
void output();

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    output();

    return 0;
}

void input() {
    cin >> E >> S >> M;
}

int ESM() {
    int year = 1;
    int e = 1, s = 1, m = 1;

    while (!(e == E && s == S && m == M)) {
        if (e < 15)
            e++;
        else
            e = 1;

        if (s < 28)
            s++;
        else
            s = 1;

        if (m < 19)
            m++;
        else
            m = 1;
        year++;
    }

    return year;
}

void output() {
    cout << ESM() << endl;
}