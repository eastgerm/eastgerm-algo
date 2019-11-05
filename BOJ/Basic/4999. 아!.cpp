//
// Created by kimdong on 2019-05-30.
//

#include <iostream>
#include <string>
using namespace std;

string jaeHwan,doctor;

void input();
string gogo();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() { cin >> jaeHwan >> doctor; }
string gogo() {
    int jLen = jaeHwan.length(), dLen = doctor.length();
    if(jLen < dLen) return "no\n";
    string norm = "a";
    for(int i=0; i<jLen-dLen; i++) doctor = norm + doctor;
    if(jaeHwan == doctor) return "go\n";
    else return "no\n";
}
void output() { cout << gogo(); }