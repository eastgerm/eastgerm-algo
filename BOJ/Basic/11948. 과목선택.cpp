//
// Created by kimdong on 2019-11-16.
//

#include <iostream>
#include <algorithm>

using namespace std;

int four[4];
int two[2];

void input();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> four[0] >> four[1] >> four[2] >> four[3];
    cin >> two[0] >> two[1];
    sort(four, four + 4);
    sort(two, two + 2);
}

void output() {
    int ans = 0;
    for (int i = 1; i <= 3; i++) {
        if (i == 1) ans += (four[i] + two[i]);
        else ans += four[i];
    }
    cout << ans << '\n';
}