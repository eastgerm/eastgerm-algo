//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
using namespace std;

int N;

void input();
int result();
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
int result() {
    for(int i=1; ; i++) if(3*i*(i-1)+1 >= N) return i;
}
void output() {
    cout << result() << '\n';
}