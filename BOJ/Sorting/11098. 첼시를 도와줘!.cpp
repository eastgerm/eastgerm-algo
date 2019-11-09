//
// Created by kimdong on 2019-08-15.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct player {
    int price;
    string name;
};

int T;
int N;
vector<player> market;

void inputT();
void func();
bool compare(player a, player b) {
    return a.price > b.price;
}

int main() {
    inputT();
    for(int tc=0; tc<T; tc++) func();
    return 0;
}

void inputT() {
    cin >> T;
}

void func() {
    cin >> N;
    market.assign(N,{1,""});
    for(int i=0; i<N; i++)
        cin >> market[i].price >> market[i].name;
    sort(market.begin(),market.end(),compare);
    cout << market[0].name << '\n';
}