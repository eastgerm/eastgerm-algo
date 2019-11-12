//
// Created by kimdong on 2019-11-12.
//

#include <iostream>
#include <vector>

using namespace std;

int T;

void inputT();

void func();

int A(int grade);

int B(int grade);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for (int tc = 0; tc < T; tc++) func();

    return 0;
}

void inputT() {
    cin >> T;
}

void func() {
    int a, b;
    cin >> a >> b;
    cout << A(a) + B(b) << '\n';
}

int A(int grade) {
    if (grade == 0) return 0;
    if (grade <= 1) return 5000000;
    if (grade <= 3) return 3000000;
    if (grade <= 6) return 2000000;
    if (grade <= 10) return 500000;
    if (grade <= 15) return 300000;
    if (grade <= 21) return 100000;
    return 0;
}

int B(int grade) {
    if (grade == 0) return 0;
    if (grade <= 1) return 5120000;
    if (grade <= 3) return 2560000;
    if (grade <= 7) return 1280000;
    if (grade <= 15) return 640000;
    if (grade <= 31) return 320000;
    return 0;
}