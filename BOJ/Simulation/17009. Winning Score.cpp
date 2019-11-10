//
// Created by kimdong on 2019-07-11.
//

#include <iostream>
using namespace std;

int a,b,c;
int A,B;

void input();
char result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> a >> b >> c;
    A += (3*a + 2*b + c);
    cin >> a >> b >> c;
    B += (3*a + 2*b + c);
}
char result() {
    if(A == B) return 'T';
    return A > B ? 'A' : 'B';
}
void output() {
    cout << result() << '\n';
}