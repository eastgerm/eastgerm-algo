//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
using namespace std;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int ccw = (x3-x2)*(y1-y2) - (x1-x2)*(y3-y2);
    if(ccw > 0) cout << "1\n";
    else if(ccw < 0) cout << "-1\n";
    else cout << "0\n";
}