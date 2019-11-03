//
// Created by kimdong on 2019-05-29.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> cnt(100,0);
int sum;
int ans1,ans2;

void input();
void field();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    field();
    output();
    return 0;
}

void input() {
    int a;
    for(int i=0; i<10; i++) cin >> a, sum += a, cnt[a/10]++;
}
void field() {
    ans1 = sum /10;
    int max = -1;
    for(int i=1; i<100; i++) if(cnt[i] > max) max = cnt[i], ans2 = i*10;
}
void output() {
    cout << ans1 << '\n' << ans2 << '\n';
}