//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))

int A,B,C;

void input();
int middle();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> A >> B >> C;
}
int middle() {
    int sum = A+B+C;
    int max = MAX(A,MAX(B,C));
    int min = MIN(A,MIN(B,C));
    return sum - max - min;
}
void output() {
    cout << middle() << '\n';
}