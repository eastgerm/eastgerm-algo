//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
#include <string>
using namespace std;

int x,y;

void input();
string whatDay();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> x >> y;
}
string whatDay(){
    string ans;
    int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int D_day = 0;
    for(int i=1; i<x; i++) D_day += month[i];
    D_day= D_day + y - 1;
    switch(D_day%7){
        case 0:
            ans = "MON";
            break;
        case 1:
            ans = "TUE";
            break;
        case 2:
            ans = "WED";
            break;
        case 3:
            ans = "THU";
            break;
        case 4:
            ans = "FRI";
            break;
        case 5:
            ans = "SAT";
            break;
        case 6:
            ans = "SUN";
            break;
    }
    return ans;
}
void output(){
    cout << whatDay() << endl;
}