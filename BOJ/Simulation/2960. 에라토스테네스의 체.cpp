//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
#include <vector>
using namespace std;

int N = 0,K = 0;
vector<bool> prime;

void input();
int filledPrime();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> N >> K;
    prime.assign(N+1,false);
}
int filledPrime(){
    int ans = 0;
    for(int i=2; i<=N; i++){
        if(!prime[i])
            for(int j=i; j<=N; j+=i){
                if(!prime[j]) {
                    prime[j] = true;
                    ans++;
                    if (ans == K) return j;
                }
            }
    }
}
void output(){
    cout << filledPrime() << endl;
}