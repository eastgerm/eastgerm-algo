//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 8 == 1) cout << "1\n";
    else if (n % 8 == 5) cout << "5\n";
    else if (n % 4 == 3) cout << "3\n";
    else if ((n / 4) % 2 == 0) cout << "2\n";
    else cout << "4\n";
    return 0;
}