//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T; cin >> T;
    for(int tc=0; tc<T; tc++) {
        vector<int> jjak;
        int sum = 0;
        for(int i=0; i<7; i++) {
            int n; cin >> n;
            if(n%2 == 0) jjak.push_back(n), sum += n;
        }
        sort(jjak.begin(),jjak.end());
        cout << sum << ' ' << jjak[0] << '\n';
    }
    return 0;
}