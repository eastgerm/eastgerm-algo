//
// Created by kimdong on 2019-07-11.
//

#include <iostream>
#include <string>
using namespace std;

string num;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> num;
}
int result() {
    int ans = 0;
    int len = num.length();
    if(len == 1) {
        ans = num[0]-'0';
        return ans;
    }
    if(num[0] == '0' && num[1] == 'x') {
        int now16 = 1;
        for(int i=len-1; i>=2; i--) {
            if(num[i] >= '0' && num[i] <= '9') ans += now16*(num[i]-'0');
            else ans += now16*(num[i]-'a'+10);
            now16 *= 16;
        }
        return ans;
    }
    if(num[0] == '0') {
        int now8 = 1;
        for(int i=len-1; i>=1; i--) {
            ans += now8*(num[i]-'0');
            now8 *= 8;
        }
        return ans;
    }
    int now10 = 1;
    for(int i=len-1; i>=0; i--) {
        ans += now10*(num[i]-'0');
        now10 *= 10;
    }
    return ans;
}
void output() {
    cout << result() << '\n';
}