//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        int a,b; cin >> a >> b;
        if(a > b) {
            int temp = a;
            a = b, b = temp;
        }
        int bae = a*b;
        for(int i=bae-1; i>1; i--)
            if(i%a == 0 && i%b == 0) bae = i;
        int yak = 1;
        for(int i=2; i<=a; i++)
            if(a%i == 0 && b%i == 0) yak = i;
        cout << bae << ' ' << yak << '\n';
    }
    return 0;
}