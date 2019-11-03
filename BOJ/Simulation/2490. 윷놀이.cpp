//
// Created by kimdong on 2019-04-29.
//

#include <iostream>
using namespace std;

int yoot = 0;
int sum = 0;

void input();
char result();
void output();

int main() {
    for(int i=0; i<3; i++){
        yoot=sum=0;
        input();
        output();
    }

    return 0;
}

void input(){
    for(int i=0; i<4; i++) cin >> yoot, sum+=yoot;
}
char result(){
    char ans = ' ';
    switch(sum){
        case 3:
            ans = 'A';
            break;
        case 2:
            ans = 'B';
            break;
        case 1:
            ans = 'C';
            break;
        case 0:
            ans = 'D';
            break;
        case 4:
            ans = 'E';
            break;
    }
    return ans;
}
void output(){
    cout << result() << endl;
}