//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
using namespace std;

vector<bool> check(10001,false);
vector<int> prime;
void makePrime() {
    for(int i=2; i<=10000; i++)
        if(!check[i]) for(int j=i+i; j<=10000; j+=i) check[j] = true;
    for(int i=2; i<=10000; i++) if(!check[i]) prime.push_back(i);
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
    int sub = 987654321;
    int a = 0, b = 0;
    int len = prime.size();
    for(int i=0; i<len; i++)
        for(int j=i; j<len; j++)
            if(N == prime[i]+prime[j])
                if(j-i < sub) a = prime[i], b = prime[j], sub = j-i;
    cout << a << ' ' << b << '\n';
}