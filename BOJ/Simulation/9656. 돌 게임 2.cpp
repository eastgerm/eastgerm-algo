//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    string ans = n%2 ? "CY\n" : "SK\n";
    cout << ans;
    return 0;
}