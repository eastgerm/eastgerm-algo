//
// Created by kimdong on 2019-07-14.
//

#include <iostream>
#include <string>
using namespace std;

int N;

void input();
void printStar(int n);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
void printStar(int n) {
    string print;
    string norm1 = "*";
    string norm2 = " ";
    if(n == 1) {
        for(int i=1; i<=N; i++) print += norm1;
        print += "\n";
    }
    else {
        for(int i=N/2; i>=0; i--) i == n-2 ? print += norm1 : print += norm2;
        for(int i=1; i<=n-2; i++) i == n-2 ? print += norm1 : print += norm2;
        print += "\n";
    }
    cout << print;
}
void output() {
    if(N%2 == 0) {
        cout << "I LOVE CBNU\n";
        return;
    }
    for(int i=1; i<=N/2+2; i++) printStar(i);
}