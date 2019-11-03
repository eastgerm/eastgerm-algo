//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<bool> check(101,false);
int ans;

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
    for(int i=0; i<N; i++) {
        int n; cin >> n;
        check[n] ? ans++ : check[n] = true;
    }
}
void output() {
    cout << ans << '\n';
}