//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

int N;

void input();
void star(int n);
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
void star(int n) {
    int total = 2*N - 1;
    int middle = total/2;
    for(int i=0; i<total; i++) {
        if(i <= middle-n) cout << ' ';
        else if(i < middle+n) cout << '*';
        else break;
    }
    cout << '\n';
}
void output() {
    for(int i=1; i<=N; i++) star(i);
}