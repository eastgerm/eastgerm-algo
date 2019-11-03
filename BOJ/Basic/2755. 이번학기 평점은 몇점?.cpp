//
// Created by kimdong on 2019-06-27.
//

#include <iostream>
#include <string>
using namespace std;

int T;
double totalR, totalH;

void inputT();
void input();
double grade(string s);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) input();
    output();
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    string subject, hakjum;
    double range;
    cin >> subject >> range >> hakjum;
    totalR += range;
    totalH += range*grade(hakjum);
}
double grade(string s) {
    if(s == "A+") return 4.3;
    else if(s == "A0") return 4.0;
    else if(s == "A-") return 3.7;
    else if(s == "B+") return 3.3;
    else if(s == "B0") return 3.0;
    else if(s == "B-") return 2.7;
    else if(s == "C+") return 2.3;
    else if(s == "C0") return 2.0;
    else if(s == "C-") return 1.7;
    else if(s == "D+") return 1.3;
    else if(s == "D0") return 1.0;
    else if(s == "D-") return 0.7;
    else return 0;
}
void output() {
    cout << fixed;
    cout.precision(2);
    cout << totalH/totalR + 0.0001 << '\n';
}