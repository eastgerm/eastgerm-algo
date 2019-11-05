//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int L,P; cin >> L >>P ;
    int person = L*P;
    int temp;
    for(int i=0; i<5; i++) cin >> temp, cout << temp-person << ' ';
    cout << '\n';
    return 0;
}