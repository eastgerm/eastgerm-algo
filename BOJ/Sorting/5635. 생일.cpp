//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct human {
    string name;
    int day;
    int month;
    int year;
};

int N;
vector<human> list;

bool compare(human a, human b) {
    if(a.year == b.year) {
        if(a.month == b.month) return a.day > b.day;
        return a.month > b.month;
    }
    return a.year > b.year;
}
void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    list.assign(N,{"",0,0,0});
    for(int i=0; i<N; i++) cin >> list[i].name >> list[i].day >> list[i].month >> list[i].year;
}
void output() {
    sort(list.begin(),list.end(),compare);
    cout << list[0].name << '\n' << list[list.size()-1].name << '\n';
}