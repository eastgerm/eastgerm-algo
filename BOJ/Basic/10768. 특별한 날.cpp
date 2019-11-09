//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int month, day;

void input();

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> month >> day;
}

void output() {
    if(month < 2) cout << "Before\n";
    else if(month > 2) cout << "After\n";
    else if(day < 18) cout << "Before\n";
    else if(day > 18) cout << "After\n";
    else cout << "Special\n";
}