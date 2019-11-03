//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
#include <vector>
using namespace std;

int A,B,C;
vector<int> counter(10,0);

void input();
void search();
void output();

int main() {
    input();
    search();
    output();

    return 0;
}

void input(){
    cin >> A >> B >> C;
}
void search(){
    int num = A*B*C;
    do {
        counter[num%10]++;
        num/=10;
    }while(num>0);
}
void output(){
    for(int i=0; i<10; i++) cout << counter[i] << endl;
}