//
// Created by kimdong on 2019-05-28.
//

#include <iostream>
#include <vector>
using namespace std;

struct square {
    int lX;
    int lY;
    int rX;
    int rY;
};

vector<square> group(4,{0,0,0,0});
vector<vector<bool>> map(101,vector<bool>(101,false));

void input();
int field();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    for(int i=0; i<4; i++) cin >> group[i].lX >> group[i].lY >> group[i].rX >> group[i].rY;
}
int field() {
    int ans = 0;
    for(int gp=0; gp<4; gp++) {
        for(int i=group[gp].lY+1; i<=group[gp].rY; i++)
            for(int j=group[gp].lX+1; j<=group[gp].rX; j++)
                if(!map[i][j]) map[i][j] = true, ans++;
    }
    return ans;
}
void output() { cout << field() << '\n'; }