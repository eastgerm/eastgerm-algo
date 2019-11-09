//
// Created by kimdong on 2019-08-15.
//

#include <iostream>

using namespace std;

int T;
int a, b;

void inputT();
void input();

int main() {
    inputT();
    for (int tc = 1; tc <= T; tc++) {
        input();
        cout << "Case " << tc << ": " << a + b << '\n';
    }
    return 0;
}

void inputT() {
    cin >> T;
}

void input() {
    cin >> a >> b;
}