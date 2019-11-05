//
// Created by kimdong on 2019-05-01.
//

#include <iostream>
#include <math.h>
using namespace std;

double pi = acos(-1.0);
double R;

void input();
void output();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> R;
}
void output(){
    double U = pi*R*R ,T = 2*R*R;
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << U << '\n' << T <<endl;
}