//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int x,y,w,h;

void input();
int minEdge();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> x >> y >> w >> h;
}
int minEdge(){
    int horizon = MIN(x,w-x);
    int vertical = MIN(y,h-y);
    return MIN(horizon,vertical);
}
void output(){
    cout<< minEdge() << endl;
}