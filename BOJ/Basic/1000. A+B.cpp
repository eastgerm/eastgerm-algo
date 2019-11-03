//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
using namespace std;

int A = 0, B = 0;

void inputAB();
void AB();

int main()
{
    ios_base::sync_with_stdio(false);

    AB();

    return 0;
}

void inputAB() {
    cin >> A >> B;
}

void AB() {
    inputAB();
    cout << A + B << endl;
}