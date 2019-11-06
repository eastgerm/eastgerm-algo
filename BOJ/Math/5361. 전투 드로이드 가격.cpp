//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

double A = 350.34;
double B = 230.90;
double C = 190.55;
double D = 125.30;
double E = 180.90;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    int N; cin >> N;
    for(int tc=0; tc<N; tc++) {
        double a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        cout << fixed;
        cout.precision(2);
        cout << "$" << a*A + b*B + c*C + d*D + e*E << '\n';
    }
}