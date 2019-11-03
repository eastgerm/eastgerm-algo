//
// Created by kimdong on 2018-05-18.
//

#include <iostream>
using namespace std;

int A = 0, B = 0;

void inputAB();
void HelloWorld();
void AB();

int main()
{
    ios_base::sync_with_stdio(false);

    //HelloWorld();
    AB();

    return 0;
}

void inputAB() {
    cin >> A >> B;
}

void HelloWorld() {
    cout << "Hello World!" << endl;
}

void AB() {
    inputAB();
    cout << A + B << endl;
}