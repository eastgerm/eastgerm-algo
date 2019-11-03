//
// Created by kimdong on 2019-05-26.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
vector<string> s;

void input();
int group();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    s.assign(N,"");
    for(int i=0; i<N; i++) cin >> s[i];
}
int group() {
    int ans = 0;
    for(int i=0; i<N; i++) {
        vector<bool> check(26,false);
        int len = s[i].length();
        for(int j=0; j<len; j++) {
            if(j == 0) check[s[i][j]-'a'] = true;
            else if(s[i][j] != s[i][j-1] && check[s[i][j]-'a']) break;
            check[s[i][j]-'a'] = true;
            if(j == len-1) ans++;
        }
    }
    return ans;
}
void output() {
    cout << group() << '\n';
}