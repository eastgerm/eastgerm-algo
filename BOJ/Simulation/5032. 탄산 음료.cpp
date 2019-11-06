//
// Created by kimdong on 2019-05-05.
//

#include <iostream>
using namespace std;

int base1,base2,norm;

void input();
int coke();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> base1 >> base2 >> norm;
}
int coke() {
    int ans = 0;
    int bottles = base1 + base2;
    while (bottles >= norm){
        ans += bottles/norm;
        bottles = bottles/norm + bottles%norm;
    }
    return ans;
}
void output() {
    cout << coke() << '\n';
}