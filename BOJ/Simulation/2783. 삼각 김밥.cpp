//
// Created by kimdong on 2019-06-16.
//

#include <iostream>
using namespace std;

double X,Y;
int N;
double ans = 987654321;

void inputXY();
void inputN();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputXY();
    inputN();
    for(int i=0; i<N; i++) inputXY();
    output();
    return 0;
}

void inputXY() {
    cin >> X >> Y;
    double temp = X * (1000/Y);
    ans = temp < ans ? temp : ans;
}
void inputN() {
    cin >> N;
}
void output() {
    cout << ans << '\n';
}