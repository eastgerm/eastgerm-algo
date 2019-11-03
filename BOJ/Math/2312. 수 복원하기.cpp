//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
using namespace std;

vector<bool> check(100001,false);
vector<int> prime;
void makePrime() {
    for(int i=2; i<=100000; i++)
        if(!check[i]) for(int j=i+i; j<=100000; j+=i) check[j] = true;
    for(int i=2; i<=100000; i++) if(!check[i]) prime.push_back(i);
}

int T;
int N;

void inputT();
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    makePrime();
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> N;
}
void output() {
    int len = prime.size();
    for(int i=0; i<len; i++) {
        if(N%prime[i] == 0) {
            int cnt = 0;
            while(true) {
                cnt++;
                N /= prime[i];
                if(N%prime[i] != 0) break;
            }
            cout << prime[i] << ' ' << cnt << '\n';
        }
    }
}