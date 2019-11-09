//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    cout << (a + b) % c << endl << (a%c + b%c) % c << endl << (a*b) % c << endl << ((a%c)*(b%c)) % c << endl;

    return 0;
}