//
// Created by kimdong on 2019-05-26.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string num;
vector<int> cnt(10,0);

void input();
void counting();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    counting();
    output();
    return 0;
}

void input() {
    cin >> num;
}
void counting() {
    int len = num.length();
    for(int i=0; i<len; i++) cnt[num[i]-'0']++;
}
void output() {
    for(int i=9; i>=0; i--)
        for(int j=0; j<cnt[i]; j++) cout << i;
    cout << '\n';
}