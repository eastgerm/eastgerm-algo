//
// Created by kimdong on 2019-08-20.
//

#include <iostream>
#include <vector>

using namespace std;

int s1, s2;

void input();

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    input();
    return 0;
}

void input() {
    cin >> s1 >> s2;
    for (int i = 0; i < s1; i++) {
        int a,b;
        cin >> a >> b;
        if(a != b) {
            cout << "Wrong Answer\n";
            return;
        }
    }
    for (int i = 0; i < s2; i++) {
        int a,b;
        cin >> a >> b;
        if(a != b) {
            cout << "Why Wrong!!!\n";
            return;
        }
    }
    cout << "Accepted\n";
}