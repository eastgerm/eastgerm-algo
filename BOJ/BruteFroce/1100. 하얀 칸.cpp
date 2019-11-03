//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> chess(8,"");

void input();
int white();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    for(int i=0; i<8; i++) cin >> chess[i];
}
int white() {
    int cnt = 0;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++) if((i+j)%2 == 0 && chess[i][j] == 'F') cnt++;
    return cnt;
}
void output() {
    cout << white() << '\n';
}