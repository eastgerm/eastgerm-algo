//
// Created by kimdong on 2018-03-14.
//

#include <iostream>
#include <string>
using namespace std;

int T = 0;
int A = 0, B = 0;
string s;

void inputT();
void inputAB();
void HelloWorld();
void AB();
void AB3();
void AB4();
int AB5();
void AB6();
void AB7();

int main()
{
    ios_base::sync_with_stdio(false);

    AB7();

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

void AB4() {
    while (cin >> A >> B)
        cout << A + B << endl;
}

int AB5() {
    inputAB();
    if (A == 0 && B == 0)
        return 0;
    else {
        cout << A + B << endl;
        AB5();
    }
}

void AB6() {
    char c;
    inputT();
    for (int i = 0; i < T; i++) {
        cin >> A >> c >> B;
        cout << A + B << endl;
    }
}

void AB7() {
    inputT();
    for (int i = 1; i <= T; i++) {
        inputAB();
        cout << "Case #" << i << ": " << A + B << endl;
    }
}