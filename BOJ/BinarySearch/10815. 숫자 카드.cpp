//
// Created by kimdong on 2019-06-02.
//

#include <iostream>
#include <map>
using namespace std;

int N,M;
map<int,int> sk;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    cin >> N;
    int a;
    for(int i=0; i<N; i++) cin >> a, sk[a] = i;
    cin >> M;
    for(int i=0; i<M; i++) {
        cin >> a;
        if(sk.count(a)) cout << "1 ";
        else cout << "0 ";
    }
    cout << '\n';
}