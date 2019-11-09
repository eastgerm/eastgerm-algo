//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int sipboo = 0;
int nums[5] = {0};

void input();
int result();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> sipboo;
    for(int i=0; i<5; i++) cin >> nums[i];
}
int result(){
    int cnt = 0;
    for(int i=0; i<5; i++) if(nums[i]==sipboo) cnt++;
    return cnt;
}
void output(){
    cout << result() << endl;
}