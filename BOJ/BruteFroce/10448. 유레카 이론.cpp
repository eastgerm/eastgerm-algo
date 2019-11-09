//
// Created by kimdong on 2019-06-20.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> tri;
int T;
int N;

void makeTri();
void inputT();
void input();
int ureka();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    makeTri();
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void makeTri() {
    for(int i=1; ; i++) {
        int newNum = i*(i+1)/2;
        if(newNum <= 999) tri.push_back(newNum);
        else return;
    }
}
void inputT() {
    cin >> T;
}
void input() {
    cin >> N;
}
int ureka() {
    int len = tri.size();
    for(int i=0; i<len; i++)
        for(int j=0; j<len; j++)
            for(int k=0; k<len; k++) if(tri[i]+tri[j]+tri[k] == N) return 1;
    return 0;
}
void output() {
    cout << ureka() << '\n';
}