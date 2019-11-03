//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int min = MIN(a,MIN(b,c));
    int max = MAX(a,MAX(b,c));
    cout << min << ' ' << a+b+c-min-max << ' ' << max << '\n';
}