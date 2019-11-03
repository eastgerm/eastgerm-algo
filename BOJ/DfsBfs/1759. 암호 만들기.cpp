//
// Created by kimdong on 2019-06-14.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L,C;
vector<char> alpa;
vector<bool> check;

void input();
void dfs(int depth, vector<char> bowl, vector<bool> chk, int prev);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(0,vector<char>(),check,-1);
    return 0;
}

void input() {
    cin >> L >> C;
    alpa.assign(C,' ');
    check.assign(C,false);
    for(int i=0; i<C; i++) cin >> alpa[i];
    sort(alpa.begin(),alpa.end());
}
void dfs(int depth, vector<char> bowl, vector<bool> chk, int prev) {
    if(depth == L) {
        int mo = 0, ja = 0;
        for(int i=0; i<L; i++) {
            if(bowl[i] == 'a' || bowl[i] == 'e' || bowl[i] == 'i' || bowl[i] == 'o' || bowl[i] == 'u') mo++;
            else ja++;
        }
        if(mo >= 1 && ja >= 2) {
            for(int i=0; i<L; i++) cout << bowl[i];
            cout << '\n';
        }
        return;
    }
    for(int i=0; i<C; i++) {
        if(!chk[i] && i > prev) {
            chk[i] = true;
            bowl.push_back(alpa[i]);
            dfs(depth+1,bowl,chk, i);
            bowl.pop_back();
            chk[i] = false;
        }
    }
}