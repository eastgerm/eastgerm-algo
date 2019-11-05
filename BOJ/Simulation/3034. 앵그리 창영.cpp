//
// Created by kimdong on 2019-05-05.
//

#include <iostream>
using namespace std;

int N,W,H;
int match;

void inputT();
void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int i=0; i<N; i++){
        input();
        output();
    }
    return 0;
}

void inputT(){
    cin >> N >> W >> H;
}
void input(){
    cin >> match;
}
void output(){
    match*match <= W*W + H*H ? cout << "DA" << '\n' : cout << "NE" << '\n';
}