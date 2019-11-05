//
// Created by kimdong on 2019-05-31.
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
    while(1){
        int a,b;
        cin >> a >> b;
        if(a==0 && b==0) return;
        a > b ? cout << "Yes" : cout << "No";
        cout << '\n';
    }
}