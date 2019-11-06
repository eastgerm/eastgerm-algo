//
// Created by kimdong on 2019-07-11.
//

#include <iostream>
using namespace std;

int T;
double N;
string operatos;

void inputT();
void input();
double result();
void output();

int main() {
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
    getline(cin,operatos);
}
double result() {
    double ans = N;
    int len = operatos.length();
    for(int i=0; i<len; i++) {
        if(operatos[i] == '@') ans *= 3;
        else if(operatos[i] == '%') ans += 5;
        else if(operatos[i] == '#') ans -= 7;
    }
    return ans;
}
void output() {
    cout << fixed;
    cout.precision(2);
    cout << result() << '\n';
}