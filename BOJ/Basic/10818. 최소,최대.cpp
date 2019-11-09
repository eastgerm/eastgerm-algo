//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    int max = -987654321, min = 987654321;
    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int num; cin >> num;
        max = MAX(max,num);
        min = MIN(min,num);
    }
    cout << min << ' ' << max << '\n';
}