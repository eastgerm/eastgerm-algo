//
// Created by kimdong on 2019-06-24.
//

#include <iostream>
using namespace std;

int R,B;
int L,W;

void input();
void tile();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    tile();
    output();
    return 0;
}

void input() {
    cin >> R >> B;
}
void tile() {
    int total = R+B;
    for(int i=total/3; ;i--) {
        if(total%i == 0) {
            int j = total/i;
            if((i-2)*(j-2) == B) {
                L = i, W = j;
                return;
            }
        }
    }
}
void output() {
    cout << L << ' ' << W << '\n';
}