//
// Created by kimdong on 2019-05-28.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;

void input();
int stick();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() { cin >> s; }
int stick() {
    int ans = 0;
    vector<int> bowl;
    int len = s.length();
    bowl.push_back(1);
    for(int i=1; i<len; i++) {
        if(s[i]=='(') bowl.push_back(1);
        else if(s[i-1]=='(') bowl.pop_back(), bowl.push_back(0);
        else bowl.push_back(2);
    }
    int bowlLen = bowl.size();
    int prev = 0;
    for(int i=0; i<bowlLen; i++) {
        if(bowl[i] == 0) ans += prev;
        else if(bowl[i] == 1) prev++;
        else prev--, ans += 1;
    }
    return ans;
}
void output() { cout << stick() << '\n'; }