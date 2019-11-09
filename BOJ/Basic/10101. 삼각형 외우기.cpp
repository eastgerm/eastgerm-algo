//
// Created by kimdong on 2019-06-10.
//

#include <iostream>
#include <string>
using namespace std;

int a,b,c;

void input();
string tri();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> a >> b >> c;
}
string tri() {
    if(a+b+c != 180) return "Error\n";
    if(a == b && b == c) return "Equilateral\n";
    if(a == b || b == c || c == a) return "Isosceles\n";
    return "Scalene\n";
}
void output() {
    cout << tri();
}