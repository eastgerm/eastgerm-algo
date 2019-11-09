//
// Created by kimdong on 2019-06-08.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<bool> check(2001,false);

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    int num;
    for(int i=0; i<N; i++) cin >> num, check[num+1000] = true;
}
void output() {
    for(int i=0; i<=2000; i++) if(check[i]) cout << i-1000 << ' ';
    cout << '\n';
}