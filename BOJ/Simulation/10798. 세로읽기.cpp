//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
#include <string>
using namespace std;

string puzzle[5];
int puzLen[5];

void input();
void output();

int main() {
    input();
    output();

    return 0;
}

void input(){
    for(int i=0; i<5; i++) cin >> puzzle[i], puzLen[i] = puzzle[i].length();
}
void output(){
    for(int j=0; j<15; j++){
        for(int i=0; i<5; i++){
            if(j<puzLen[i]) cout << puzzle[i][j];
        }
    }
}