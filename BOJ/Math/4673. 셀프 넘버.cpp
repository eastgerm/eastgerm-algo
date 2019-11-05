//
// Created by kimdong on 2019-05-16.
//

#include <iostream>
#include <vector>
using namespace std;

vector<bool> nums(10001,true);

int d(int n);
void selfNum();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    selfNum();
    output();
    return 0;
}

int d(int n) {
    int res = n;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}
void selfNum() {
    for(int i=1; i<10000; i++) if(d(i)<10001) nums[d(i)] = false;
}
void output() {
    for(int i=1; i<=10000; i++) if(nums[i]) cout << i << '\n';
}