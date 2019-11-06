//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

#define MAX(x,y) ((x)>(y)?(x):(y))

int day,totalKorean,totalMath,perKorean,perMath;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    cin >> day >> totalKorean >> totalMath >> perKorean >> perMath;
}
int result(){
    int dayKorean = (totalKorean-1)/perKorean + 1;
    int dayMath = (totalMath-1)/perMath + 1;
    int dayTotal = MAX(dayKorean,dayMath);
    return day-dayTotal;
}
void output(){
    cout << result() << '\n';
}