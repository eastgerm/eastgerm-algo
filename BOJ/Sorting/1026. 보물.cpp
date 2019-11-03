//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> A,B;

bool compare(int a, int b) {return a > b;}

void input();
int item();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    A.assign(N,0);
    B.assign(N,0);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++) cin >> B[i];
}
int item() {
    int sum = 0;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),compare);
    for(int i=0; i<N; i++) sum += A[i]*B[i];
    return sum;
}
void output() {
    cout << item() << '\n';
}