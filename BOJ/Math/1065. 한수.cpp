//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
#include <vector>
using namespace std;

int N;

void input();
bool hansoo(int n);
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
bool hansoo(int n) {
    if(n < 100) return true;
    vector<char> numString;
    while(n) {
        numString.push_back(n%10);
        n /= 10;
    }
    int len = numString.size();
    int d = numString[0] - numString[1];
    for(int i=1; i<len-1; i++) {
        if(numString[i] - numString[i+1] != d) return false;
        if(i == len-2) return true;
    }
    return true;
}
int result() {
    if(N < 100) return N;
    int ans = 99;
    for(int i=100; i<=N; i++) if(hansoo(i)) ans++;
    return ans;
}
void output() {
    cout << result() << '\n';
}