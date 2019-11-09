//
// Created by kimdong on 2019-06-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct info {
    int age;
    string name;
    int prior;
};

int N;
vector<info> chart;

bool compare(info a, info b) {
    if(a.age == b.age) return a.prior < b.prior;
    return a.age < b.age;
}
void input();
void output();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N;
    chart.assign(N,{0,""});
    for(int i=0; i<N; i++) cin >> chart[i].age >> chart[i].name, chart[i].prior = i;
}
void output(){
    sort(chart.begin(),chart.end(),compare);
    for(int i=0; i<N; i++) cout << chart[i].age << ' ' << chart[i].name << '\n';
}