//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>

using namespace std;

string num;

void func();

int main() {
    func();
    return 0;
}

void func() {
    while (true) {
        cin >> num;
        if (num == "0") return;
        int len = num.length();
        if(len == 1) cout << "yes\n";
        else {
            for (int i = 0; i < len / 2; i++) {
                if (num[i] != num[len - 1 - i]) {
                    cout << "no\n";
                    break;
                }
                if (i == len / 2 - 1) {
                    cout << "yes\n";
                }
            }
        }
    }
}