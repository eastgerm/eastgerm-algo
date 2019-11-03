//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
using namespace std;

int N,M;

void input();
int knife(int food,int person);
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
}
int knife(int food,int person) {
    if(food == person) return 0;
    if(food == 1) return person-1;
    if(food > person) {
        if(food%person == 0) return 0;
        else return knife(food%person,person);
    }
    else {
        if(person%food == 0) return (person/food - 1)*food;
        else return food + knife(food,person%food) + knife(food,person-(person%food));
    }
}
void output() {
    cout << knife(N,M) << '\n';
}
