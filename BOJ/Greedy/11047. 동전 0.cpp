//
// Created by kimdong on 2019-05-01.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool _desc(int a,int b){
    return a>b;
}

int N,K;
vector<int> coin;

void input();
int min();
void output();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> K;
    coin.assign(N,0);
    for(int i=0; i<N; i++) cin >> coin[i];
}
int min(){
    int ans = 0;
    sort(coin.begin(),coin.end(),_desc);
    for(int i=0; i<N; i++) if(coin[i] <= K) ans+=(K/coin[i]), K%=coin[i];
    return ans;
}
void output(){
    cout << min() <<endl;
}