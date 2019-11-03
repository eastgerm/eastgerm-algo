//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <vector>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int N;
double M = -987654321;
double sum = 0;
vector<int> score;

void input();
double avg();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    score.assign(N,0);
    for(int i=0; i<N; i++) cin >> score[i], M = MAX(M,score[i]), sum += score[i];
}
double avg() {
    return (sum/M * 100) / N;
}
void output() {
    cout << avg() << '\n';
}