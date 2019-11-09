//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N,M; cin >> N >> M;
    vector<int> prior(N+1,0);
    for(int i=0; i<M; i++) {
        int a,b; cin >> a >> b;
        int aValue,bValue;
        aValue = prior[a] ? prior[a] : a;
        bValue = prior[b] ? prior[b] : b;
        prior[a] = bValue, prior[b] = aValue;
    }
    for(int i=1; i<=N; i++) prior[i] ? cout << prior[i] : cout << i, cout << ' ';
    cout << '\n';
    return 0;
}