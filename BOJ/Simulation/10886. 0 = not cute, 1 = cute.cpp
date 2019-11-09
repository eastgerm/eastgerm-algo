//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
using namespace std;

int N = 0;
int vote[2] = {0};

void input();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
    int temp;
    for(int i=0; i<N; i++) cin >> temp, vote[temp]++;
}
void output(){
    vote[0]>vote[1] ? cout << "Junhee is not cute!" << endl : cout << "Junhee is cute!" << endl;
}