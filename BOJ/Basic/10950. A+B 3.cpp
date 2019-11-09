//
// Created by kimdong on 2018-03-13.
//

#include <iostream>
using namespace std;

int T = 0;
int A = 0, B = 0;

void inputT();
void inputAB();
void HelloWorld();
void AB();
void AB3();

int main()
{
    ios_base::sync_with_stdio(false);

    AB3();

    return 0;
}

void inputT() {
    cin >> T;
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

void AB3() {
    inputT();
    for (int i = 0; i < T; i++)
        AB();
}