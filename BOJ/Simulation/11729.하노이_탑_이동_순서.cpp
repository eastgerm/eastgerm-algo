//
// Created by kimdong on 2020-05-12.
//

#include <iostream>
#include <math.h>

using namespace std;

int N;

void input();

int calculateTotal();

void moveHanoi(int level, int start, int mid, int finish);

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}

int calculateTotal() {
    return pow(2, N) - 1;
}

void moveHanoi(int level, int start, int mid, int finish) {
    if (level == 1) {
        cout << start << ' ' << finish << '\n';
        return;
    }
    moveHanoi(level - 1, start, finish, mid);
    cout << start << ' ' << finish << '\n';
    moveHanoi(level - 1, mid, start, finish);
}

void output() {
    cout << calculateTotal() << '\n';
    moveHanoi(N, 1, 2, 3);
}