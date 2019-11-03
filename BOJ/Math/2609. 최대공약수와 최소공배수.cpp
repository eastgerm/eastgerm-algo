//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ( x>y ? x : y )

int main()
{
    int a = 0, b = 0, start = 0;
    cin >> a >> b;
    start = MAX(a, b);
    start /= 2;

    int GCD = 1, LCM = 1;

    if (a != b) {
        for (int i = start; i > 0; i--) {
            if ((a%i == 0) && (b%i == 0)) {
                GCD = i; break;
            }
        }
    }
    else
        GCD = a;

    LCM = (a*b) / GCD;

    cout << GCD << endl << LCM << endl;

    return 0;
}