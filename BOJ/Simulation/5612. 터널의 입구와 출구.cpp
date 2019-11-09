//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
using namespace std;

int N,M;

int func();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    output();
    return 0;
}

int func() {
    cin >> N >> M;
    int now = M;
    int ans = now;
    for(int i=0; i<N; i++) {
        int in,out;
        cin >> in >> out;
        now += (in-out);
        if(now < 0) return 0;
        ans = ans > now ? ans : now;
    }
    return ans;
}
void output() {
    cout << func() << '\n';
}