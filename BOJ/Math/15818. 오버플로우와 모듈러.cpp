//
// Created by kimdong on 2019-08-25.
//

#include <iostream>

using namespace std;

long long mod(long long a, long long b, long long m) {
    return ((a % m) * (b % m)) % m;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        ans = i == 0 ? temp % m : mod(ans, temp, m);
    }
    cout << ans << '\n';
    return 0;
}