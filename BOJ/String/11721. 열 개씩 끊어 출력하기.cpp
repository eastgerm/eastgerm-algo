//
// Created by kimdong on 2018-08-28.
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
void AB8();
void print();
void sumN();
void print10();

int main()
{
    ios_base::sync_with_stdio(false);

    print10();

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

void AB8() {
    inputT();
    for (int i = 1; i <= T; i++) {
        inputAB();
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << endl;
    }
}

void print() {
    for (int i = 0; i < 100; i++) {
        getline(cin, s);
        cout << s << endl;
    }
}

void sumN() {
    int sum = 0;
    cin >> T;
    cin >> s;

    for (int i = 0; i < T; i++)
        sum += s[i] - '0';
    cout << sum << endl;
}

void print10() {
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (i % 10 == 9)
            cout << s[i] << endl;
        else
            cout << s[i];
    }
}