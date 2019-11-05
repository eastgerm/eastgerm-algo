//
// Created by kimdong on 2019-05-20.
//

#include <iostream>
#include <vector>
using namespace std;

vector<bool> mod(42,false);
int ans = 0;

void input();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    int n;
    for(int i=0; i<10; i++) {
        cin >> n;
        n %= 42;
        if(!mod[n]) mod[n] = true, ans++;
    }
}
void output() {
    cout << ans << '\n';
}