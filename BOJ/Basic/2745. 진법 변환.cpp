//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
#include <string>
using namespace std;

int pow1(int x, int n) {
    int res = 1;
    for (int i = n; i > 0; i--)
        res *= x;

    return res;
}

int main()
{
    string n; int b = 0;

    cin >> n >> b;
    int ex = n.length() - 1;
    int sum = 0;

    for (int i = 0; i < n.length(); i++) {
        if (n[i] - 48 >= 0 && n[i] - 48 <= 9)
            sum += pow1(b, ex--)*(n[i] - 48);
        else
            sum += pow1(b, ex--)*(n[i] - 55);
    }

    cout << sum;

    return 0;
}