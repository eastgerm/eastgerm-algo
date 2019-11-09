//
// Created by kimdong on 2018-05-09.
//

#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int res = 1;

    for (int i = N; i >= 1; i--)
        res *= i;

    cout << res;

    return 0;
}