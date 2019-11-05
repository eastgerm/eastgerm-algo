//
// Created by kimdong on 2019-05-03.
//

#include <iostream>
using namespace std;

int A,B,V;

void input();
int conquest();
void output();

int main(){
    input();
    output();
    return 0;
}

void input(){
    cin >> A >> B >> V;
}
int conquest(){
    if(A == V) return 1;
    int ans = 0;
    int margin =  A-B;
    int lastDay = V-A;
    ans = (lastDay-1)/margin + 2;
    return ans;
}
void output(){
    cout << conquest() << endl;
}