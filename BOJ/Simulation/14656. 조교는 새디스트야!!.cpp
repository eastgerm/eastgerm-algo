//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N; cin >> N;
    int ans = 0;
    vector<int> prior(N+1,0);
    for(int i=1; i<=N; i++) {
        cin >> prior[i];
        if(prior[i] != i) ans++;
    }
    cout << ans << '\n';
    return 0;
}