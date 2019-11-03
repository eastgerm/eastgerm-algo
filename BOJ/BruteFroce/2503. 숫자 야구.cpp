//
// Created by kimdong on 2019-06-24.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
int N,S,B;
vector<int> nums;

void inputT();
void input();
bool baseball(int target, int value);
void check();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        check();
    }
    output();
    return 0;
}

void inputT() {
    cin >> T;
    for(int i=100; i<=999; i++) {
        int n1 = i/100, n2 = i/10 - 10*n1, n3 = i%10;
        if(n1 && n2 && n3 && n1 != n2 && n2 != n3 && n3 != n1) nums.push_back(i);
    }
}
void input() {
    cin >> N >> S >> B;
}
bool baseball(int target, int value) {
    int strike = 0, ball = 0;
    int t1 = target/100, t2 = target/10 - 10*t1, t3 = target%10;
    int v1 = value/100, v2 = value/10 - 10*v1, v3 = value%10;
    bool poss1 = true, poss2 = true, poss3 = true;
    if(t1 == v1) strike++, poss1 = false;
    if(t2 == v2) strike++, poss2 = false;
    if(t3 == v3) strike++, poss3 = false;
    vector<int> digit(10,0);
    if(poss1) digit[t1] += 10, digit[v1] += 1;
    if(poss2) digit[t2] += 10, digit[v2] += 1;
    if(poss3) digit[t3] += 10, digit[v3] += 1;
    for(int i=1; i<=9; i++) {
        int n1 = digit[i]/10, n2 = digit[i]%10;
        if(n1 && n2) ball += (n1 < n2 ? n1 : n2);
    }
    return strike == S && ball == B;
}
void check() {
    vector<int> temp = nums;
    nums.clear();
    int len = temp.size();
    for(int i=0; i<len; i++) if(baseball(N,temp[i])) nums.push_back(temp[i]);
}
void output() {
    cout << nums.size() << '\n';
}