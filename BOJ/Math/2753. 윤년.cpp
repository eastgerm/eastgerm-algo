//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    if(N%4) ans = 0;
    else if(N%100) ans = 1;
    else if(N%400) ans = 0;
    else ans = 1;
    cout << ans << '\n';
    return 0;
}