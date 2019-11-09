//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
using namespace std;

struct int2{
    int scale;
    double grade;
};

int T;
int N;
vector<int2> list;
int sumScale = 0;
double sumTotal = 0;

void inputT();
void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++){
        input();
        output();
    }
    return 0;
}

void inputT(){
    cin >> T;
}
void input(){
    cin >> N;
    list.assign(N,{0,0});
    for(int i=0; i<N; i++){
        cin >> list[i].scale >> list[i].grade;
        sumScale += list[i].scale;
        sumTotal += (list[i].scale * list[i].grade);
    }
}
void output(){
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << sumScale << ' ' << sumTotal/sumScale << '\n';
    sumScale = 0, sumTotal = 0;
    list.clear();
}