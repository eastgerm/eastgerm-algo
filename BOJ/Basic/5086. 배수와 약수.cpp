//
// Created by kimdong on 2019-06-25.
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
    int A = -1,B = -1;
    while(true) {
        cin >> A >> B;
        if(A == 0 && B == 0) return;
        if(B%A == 0) cout << "factor\n";
        else if(A%B == 0) cout << "multiple\n";
        else cout << "neither\n";
    }
}