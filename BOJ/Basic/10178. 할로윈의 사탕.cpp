//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

void print(int a, int b) {
    cout << "You get " << a/b << " piece(s) and your dad gets " << a%b <<" piece(s).\n";
}
void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        int a,b; cin >> a >> b;
        print(a,b);
    }
}