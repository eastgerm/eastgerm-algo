//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

bool _desc(int a,int b){return a > b;}

string N;
vector<int> num;
int len;
int total;
bool possibleTen = false;

void input();
bool possible30();
void result();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    result();
    return 0;
}

void input(){
    cin >> N;
    len = N.length();
    num.assign(len,0);
    for(int i=0; i<len; i++) {
        num[i] = N[i]-'0', total+=num[i];
        if(num[i] == 0) possibleTen = true;
    }
}
bool possible30(){
    return total%3==0 && possibleTen;
}
void result() {
    if (possible30()) {
        sort(num.begin(), num.end(), _desc);
        for (int i=0; i<len; i++) cout << num[i];
        cout << '\n';
        return;
    }
    else cout << -1 << '\n';
}