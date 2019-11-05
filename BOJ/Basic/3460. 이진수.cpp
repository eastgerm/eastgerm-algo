//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int T;
int N;

void inputT();
void inputN();
int maxPow();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        inputN();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void inputN() {
    cin >> N;
}
int maxPow() {
    for(int i=0; ;i++) {
        if(pow(2,i) > N) return i-1;
        else if(pow(2,i) == N) return i;
    }
}
void output() {
    vector<int> bowl;
    int start = maxPow();
    while(start != -1) {
        if(N/(int)pow(2,start) == 1) bowl.push_back(start);
        N %= (int)pow(2,start);
        start -= 1;
    }
    int len = bowl.size();
    for(int i=len-1; i>=0; i--) cout << bowl[i] << ' ';
    cout << '\n';
}