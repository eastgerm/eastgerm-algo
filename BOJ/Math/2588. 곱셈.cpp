//
// Created by kimdong on 2019-05-14.
//

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int temp = b;
    while(temp > 0) {
        cout << a*(temp%10) << '\n';
        temp /= 10;
    }
    cout << a*b << '\n';
    return 0;
}