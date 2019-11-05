//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
using namespace std;

int N = 1;
bool prime[123456*2 + 1] = {false};

void testCase();
void filledPrime();
void input();
int result();
void output();

int main() {
    testCase();

    return 0;
}

void testCase(){
    filledPrime();
    while(true){
        input();
        if(N == 0) return;
        output();
    }
}
void filledPrime(){
    for(int i=2; i<=123456*2; i++){
        if(!prime[i])
            for(int j=2*i; j<=123456*2; j+=i) prime[j] = true;
    }
}
void input(){
    cin >> N;
}
int result(){
    int ans = 0;
    for(int i=N+1; i<=2*N; i++) if(!prime[i]) ans++;
    return ans;
}
void output(){
    cout << result() << endl;
}