//
// Created by kimdong on 2019-10-08.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N, first;
    cin >> N >> first;
    if (N < 6) {
        for(int i=2; i<=N; i++) {
            first == 0 ? cout << "1\n" : cout << "0\n";
            first = first == 0 ? 1 : 0;
        }
    } else {
        cout << "Love is open door\n";
    }
    return 0;
}