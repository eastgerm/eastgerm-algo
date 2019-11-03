//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
int sum;
vector<int> concent;

void input();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
    concent.assign(N,0);
    for(int i=0; i<N; i++) cin >> concent[i], sum+=concent[i];
}
void output(){
    cout << sum - (N-1) << endl;
}