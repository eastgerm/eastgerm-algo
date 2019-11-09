//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
using namespace std;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    cout << "n e\n"
            "- -----------\n";
    double facto = 1;
    double sum = 0;
    for(int n=0; n<=9; n++) {
        cout << n << ' ';
        facto = n == 0 ? facto : facto*n;
        sum += 1/facto;
        if(n<3) cout << sum << '\n';
        else {
            cout << fixed;
            cout.precision(9);
            cout << sum << '\n';
        }
    }
}