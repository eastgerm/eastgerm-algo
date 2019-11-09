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

int N = 0;
vector<int> atm;

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
    cin >> N;
    atm.assign(N,0);
    for(int i=0; i<N; i++) cin >> atm[i];
}
int min(){
    int ans = 0;
    sort(atm.begin(),atm.end(),_desc);
    for(int i=0; i<N; i++) ans+=(i+1)*atm[i];
    return ans;
}
void output(){
    cout << min() <<endl;
}