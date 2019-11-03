//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

bool _desc(int a,int b){return a > b;}

int N;
vector<int> rope;

void input();
int result();
void output();

int main(){
    input();
    output();
    return 0;
}

void input(){
    cin >> N;
    rope.assign(N,0);
    for(int i=0; i<N; i++) cin >> rope[i];
}
int result(){
    sort(rope.begin(),rope.end(),_desc);
    int max = -987654321;
    for(int i=0; i<N; i++){max = MAX(max,(i+1)*rope[i]);}
    return max;
}
void output(){
    cout << result() << endl;
}