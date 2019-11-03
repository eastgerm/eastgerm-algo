//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

long long N;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N;
}
int result(){
    for(long long i=1;;i++) if(i*(i+1)/2 > N) return i-1;
}
void output(){
    cout << result() << '\n';
}