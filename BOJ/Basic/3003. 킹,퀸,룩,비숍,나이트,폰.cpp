//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int norm[6] = {1,1,2,2,2,8};
    int now[6];
    for(int i=0; i<6; i++) cin >> now[i], now[i] = norm[i] - now[i], cout << now[i] << ' ';
    cout << '\n';
    return 0;
}