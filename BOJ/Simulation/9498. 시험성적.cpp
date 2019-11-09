//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int score;

void input();
char exam();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    cin >> score;
}
char exam(){
    if(score>=90) return 'A';
    else if(score>=80) return 'B';
    else if(score>=70) return 'C';
    else if(score>=60) return 'D';
    else return 'F';
}
void output(){
    cout << exam() << endl;
}