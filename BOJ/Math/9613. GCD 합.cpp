//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ( x>y ? x : y )

int GCD(int a, int b) {
    int start = 0;
    start = MAX(a, b);
    start /= 2;

    if (a != b) {
        for (int i = start; i > 0; i--)
            if ((a%i == 0) && (b%i == 0))
                return i;
    }
    else
        return a;
}

int main()
{
    int T = 0;
    int n = 0;
    int d[101] = { 0 };
    long long sum = 0;

    cin >> T;

    while (T--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> d[i];

        for (int i = 0; i < n-1; i++)
            for (int j = i + 1; j < n; j++)
                sum += GCD(d[i], d[j]);

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}