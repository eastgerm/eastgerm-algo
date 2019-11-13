//
// Created by kimdong on 2019-11-13.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int day, month;
int months[13] = {0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
string dates[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};

void input();

int calculDay();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> day >> month;
}

int calculDay() {
    int prevDay = 0;
    for (int i = 1; i <= month; i++) prevDay += months[i];
    return prevDay + day;
}

void output() {
    cout << dates[calculDay() % 7] << '\n';
}