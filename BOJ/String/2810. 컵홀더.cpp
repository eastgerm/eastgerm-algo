//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
string s;

void input();
int counter();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> s;
}
int counter() {
    int ans = 1;
    bool prevL = false;
    for(int i=0; i<N; i++) {
        if(s[i] == 'S') ans++;
        else !prevL ? prevL = true : (prevL = false, ans++);
    }

    return ans > N ? N : ans;
}
void output() {
    cout << counter() << '\n';
}