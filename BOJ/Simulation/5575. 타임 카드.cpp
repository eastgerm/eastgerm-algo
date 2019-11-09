//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> timeTable;

void input();
int result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    int h1,m1,s1,h2,m2,s2;
    for(int i=0; i<3; i++) {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        int startSec = h1*3600 + m1*60 + s1;
        int endSec = h2*3600 + m2*60 + s2;
        timeTable.push_back(endSec-startSec);
    }
}
void output() {
    for(int i=0; i<3; i++) {
        int time = timeTable[i];
        cout << time/3600 << ' ';
        time %= 3600;
        cout << time/60 << ' ';
        time %= 60;
        cout << time << '\n';
    }
}