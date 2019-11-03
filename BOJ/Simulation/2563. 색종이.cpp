//
// Created by kimdong on 2019-05-29.
//

#include <iostream>
#include <vector>
using namespace std;

struct square {
    int x;
    int y;
};

int N;
vector<square> items;
vector<vector<bool>> map;

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
    cin >> N;
    items.assign(N,{0,0});
    for(int i=0; i<N; i++) cin >> items[i].x >> items[i].y;
}
int field() {
    int ans = 0;
    map.assign(101,vector<bool>(101,false));
    for(int item=0; item<N; item++) {
        for(int i=1; i<=10; i++)
            for(int j=1;j<=10; j++) {
                int newX = items[item].x + i,newY = items[item].y + j;
                if(!map[newX][newY]) ans++, map[newX][newY] = true;
            }
    }
    return ans;
}
void output() { cout << field() << '\n'; }