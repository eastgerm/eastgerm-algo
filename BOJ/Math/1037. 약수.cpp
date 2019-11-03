//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long N;
vector<long long> divisor;

void input();
long long solution();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
    divisor.assign(N,0);
    for(int i=0; i<N; i++) cin >> divisor[i];
}
long long solution(){
    sort(divisor.begin(),divisor.end());
    return divisor[0]*divisor[N-1];
}
void output(){
    cout<< solution() << endl;
}