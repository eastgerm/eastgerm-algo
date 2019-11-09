//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
using namespace std;

int N;
string s;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> s;
}
void output() {
    int a = 0, b = 0;
    for(int i=0; i<N; i++) s[i] == 'A' ? a++ : b++;
    if(a > b) cout << "A\n";
    else if(a < b) cout << "B\n";
    else cout << "Tie\n";
}