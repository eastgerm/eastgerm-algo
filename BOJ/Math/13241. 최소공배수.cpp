//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

long long A,B;

void input();
long long gongbae();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B;
    if(A > B) {
        long long temp = A;
        A = B;
        B = temp;
    }
}
long long gongbae() {
    for(long long i=B; ; i+=B) if(i%A == 0) return i;
}
void output() {
    cout << gongbae() << '\n';
}