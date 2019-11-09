//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int score[5] = {0};
int sum = 0;

void input();
int evg();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    for(int i=0; i<5; i++) cin >> score[i];
}
int evg(){
    for(int i=0; i<5; i++) score[i]>=40 ? sum+=score[i] : sum+=40;
    return sum/5;
}
void output(){
    cout << evg() << endl;
}