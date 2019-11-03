//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
using namespace std;
#define MIN(x,y) ((x)<(y)?(x):(y))

int T;
int x1,y1,r1,x2,y2,r2;

void inputT();
void input();
int turret();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {cin >> T;}
void input() {cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;}
int turret() {
    int distance = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    int minR = (r1-r2)*(r1-r2);
    int maxR = (r1+r2)*(r1+r2);
    if(distance == 0) {
        if(r1 == r2) return -1;
        else return 0;
    }
    else {
        if(distance < minR || distance > maxR) return 0;
        else if(distance == minR || distance == maxR) return 1;
        else return 2;
    }
}
void output() {
    cout << turret() << '\n';
}