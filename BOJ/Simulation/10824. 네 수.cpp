//
// Created by kimdong on 2018-03-27.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double a = 0, b = 0, c = 0, d = 0;
    long ab = 0, cd = 0;
    int ex1 = 0, ex2 = 0;


    cin >> a >> b >> c >> d;

    ex1 = (int)log10(10 * b);
    ex2 = (int)log10(10 * d);

    ab = (long)a*pow(10, ex1) + b;
    cd = (long)c*pow(10, ex2) + d;

    cout << ab + cd;

    return 0;
}