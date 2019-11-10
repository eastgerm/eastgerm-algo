//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

int N;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N;
}
void output() {
    N ? cout << "Leading the Way to the Future\n" : cout << "YONSEI\n";
}