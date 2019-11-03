//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N;
vector<int> alpha(26,0);

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    cin >> N;
    string s;
    for(int i=0; i<N; i++) cin >> s, alpha[s[0]-'a']++;
}
void output(){
    bool flag = true;
    for(int i=0; i<26; i++) if(alpha[i]>=5) flag = false, cout << (char)(i+'a');
    if(flag) cout << "PREDAJA";
    cout << '\n';
}