//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <vector>
using namespace std;

int ans = 0;
int maxi = -1;

void input();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    for(int i=1; i<=5; i++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int temp = a+b+c+d;
        if(temp > maxi) ans = i, maxi = temp;
    }
}
void output() {
    cout << ans << ' ' << maxi << '\n';
}