//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
#include <vector>
using namespace std;

int N,X;
vector<int> seq;
vector<int> ans;

void input();
void search();
void output();

int main() {
    input();
    search();
    output();

    return 0;
}

void input(){
    cin >> N >> X;
    seq.assign(N,0);
    for(int i=0; i<N; i++) cin >> seq[i];
}
void search(){
    for(int i=0; i<N; i++) if(seq[i]<X) ans.push_back(seq[i]);
}
void output(){
    int len = ans.size();
    for(int i=0; i<len; i++) cout << ans[i] << ' ';
}