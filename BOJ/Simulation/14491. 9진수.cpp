//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> bowl;
    while (n > 0) {
        bowl.push_back(n % 9);
        n /= 9;
    }
    int len = bowl.size();
    for (int i = len - 1; i >= 0; i--) cout << bowl[i];
    cout << '\n';
    return 0;
}