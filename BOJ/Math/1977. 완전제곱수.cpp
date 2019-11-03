//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int M,N;
bool power[10001] = {false};

void input();
void solution();

int main() {
    input();
    solution();

    return 0;
}

void input(){
    cin >> N >> M;
}
void solution(){
    int sum = 0;
    int first = 0;
    for(int i=1; i*i<=10000; i++) power[i*i] = true;
    for(int i=N; i<=M; i++)
        if(power[i]){
            if(sum==0) first = i, sum+=i;
            else sum+=i;
        }
    sum ? cout << sum << endl << first << endl : cout << -1 << endl;
}