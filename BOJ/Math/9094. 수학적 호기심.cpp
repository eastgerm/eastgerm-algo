//
// Created by kimdong on 2019-08-16.
//

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int tc=0; tc<T; tc++) {
        int n,m;
        cin >> n >> m;
        int ans = 0;
        for(int i=1; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(((i*i)+(j*j)+m)%(i*j) == 0) ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}