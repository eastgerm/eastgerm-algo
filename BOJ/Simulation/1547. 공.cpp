//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int N;
    cin >> N;
    int res = 1;
    for(int i=0; i<N; i++) {
        int a,b;
        cin >> a >> b;
        if(a == res || b == res) res = a+b-res;
    }
    cout << res << '\n';
    return 0;
}