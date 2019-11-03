//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A,B;
    cin >> A >> B;
    if(A > B) cout << ">\n";
    else if(A < B) cout << "<\n";
    else cout << "==\n";
    return 0;
}