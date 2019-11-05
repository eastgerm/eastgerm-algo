//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int a,b;

void input();
int sangsoo();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> a >> b;
}
int sangsoo(int n) {
    int newN = n%10 * 100;
    n /= 10;
    newN += ((n%10) * 10) + n/10;
    return newN;
}
void output() {
    cout << MAX(sangsoo(a),sangsoo(b)) << '\n';
}