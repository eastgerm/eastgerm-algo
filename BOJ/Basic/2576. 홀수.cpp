//
// Created by kimdong on 2019-06-04.
//

#include <iostream>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int ans1,ans2 = 101;

void input();
void output();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    for(int i=0; i<7; i++) {
        int n; cin >> n;
        if(n%2) ans1 += n, ans2 = MIN(ans2,n);
    }
}
void output(){
    if(!ans1) cout << -1 << '\n';
    else cout << ans1 << '\n' << ans2 << '\n';
}