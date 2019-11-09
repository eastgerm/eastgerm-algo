//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
using namespace std;

int main()
{
    char d[31];
    int n = 0, b = 0;
    cin >> n >> b;
    int temp = n, index = 0;

    while (temp != 0) {
        if (temp%b >= 0 && temp%b <= 9) {
            d[index++] = temp%b + 48;
            temp /= b;
        }
        else {
            d[index++] = temp%b + 55;
            temp /= b;
        }

    }

    for (int i = index - 1; i >= 0; i--)
        cout << d[i];

    return 0;
}