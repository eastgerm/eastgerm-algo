//
// Created by kimdong on 2019-06-18.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int N,K;

void input();
int crypLen();
int findCryp();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
}
int crypLen() {
    int len = 0;
    int now10 = 10;
    int modLen = 1;
    for(int i=1; now10<=N; i++) {
        len += i*9*(now10/10);
        now10 *= 10;
        modLen++;
    }
    len += modLen*(N-(now10/10)+1);
    return len;
}
int findCryp() {
    if(crypLen() < K) return -1;
    int len = 0;
    int now10 = 10;
    int modLen = 1;
    for(int i=1; ; i++) {
        len += i*9*(now10/10);
        if(len > K) {
            len -= i*9*(now10/10);
            break;
        }
        now10 *= 10;
        modLen++;
    }
    int mod = K-len;
    int targetNum = 0;
    for(int i=now10/10; ;i++) {
        mod -= modLen;
        if(mod <= 0) {
            targetNum = i;
            break;
        }
    }
    mod *= -1;
    int ans = 0;
    for(int i=0; i<=mod; i++) {
        ans = targetNum%10;
        targetNum /= 10;
    }
    return ans;
}
void output() {
    cout << findCryp() << '\n';
}