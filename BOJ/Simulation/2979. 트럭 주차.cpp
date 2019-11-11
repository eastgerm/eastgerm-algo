//
// Created by kimdong on 2019-11-11.
//

#include <iostream>

using namespace std;

int A, B, C;
int table[101] = {0};

void input();

int cost();

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B >> C;
    for (int tc = 0; tc < 3; tc++) {
        int start, end;
        cin >> start >> end;
        for (int i = start + 1; i <= end; i++) table[i]++;
    }
}

int cost() {
    int ans = 0;
    for (int i = 1; i <= 100; i++) {
        int nowCost = 0;
        switch (table[i]) {
            case 0:
                nowCost = 0;
                break;
            case 1:
                nowCost = A;
                break;
            case 2:
                nowCost = B;
                break;
            case 3:
                nowCost = C;
                break;
        }
        ans += nowCost * table[i];
    }
    return ans;
}

void output() {
    cout << cost() << '\n';
}