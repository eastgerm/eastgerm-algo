//
// Created by kimdong on 2019-05-27.
//

#include <iostream>
#include <vector>
using namespace std;

int M,N;
vector<bool> prime;
int sum = 0, ans = 0;

void input();
void makePrime();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    makePrime();
    output();
    return 0;
}

void input() { cin >> M >> N; }
void makePrime() {
    prime.assign(N+1,true);
    prime[0] = prime[1] = false;
    for(int i=2; i<=N; i++) {
        if(prime[i]) {
            for (int j=i+i; j<=N; j+=i) prime[j] = false;
            if(i>=M && i<=N) sum += i, ans = ans == 0? i : ans;
        }
    }
}
void output() {
    if(ans == 0) cout << -1 << '\n';
    else cout << sum << '\n' << ans << '\n';
}