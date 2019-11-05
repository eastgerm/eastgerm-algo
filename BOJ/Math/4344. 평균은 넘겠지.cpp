//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(double a, double b) {return a > b;}

int T;
int N;
vector<double> scores;
double sum = 0;

void inputT();
void input();
double avg();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> N;
    scores.assign(N,0);
    for(int i=0; i<N; i++) cin >> scores[i], sum += scores[i];
}
double avg() {
    double person = 0;
    double cutline = sum / N;
    sort(scores.begin(),scores.end(),compare);
    for(int i=0; i<N; i++) {
        if(scores[i] > cutline) person++;
        else break;
    }
    return person/N * 100;
}
void output() {
    cout << fixed;
    cout.precision(3);
    cout << avg() << '%' << '\n';
    sum = 0, scores.clear();
}