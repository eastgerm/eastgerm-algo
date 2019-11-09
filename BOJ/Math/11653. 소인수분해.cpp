//
// Created by kimdong on 2018-05-17.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int n = 0;
bool d[10000001] = { true,true };

void input(); // 입력 함수
void prime(); // 소수 판별 함수
void soinsoo(int n); // 골드바흐 판정 및 출력 함수

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    input();
    prime();
    soinsoo(n);

    return 0;
}

void input() {
    cin >> n;
}

void prime() {
    for (int i = 2; i*i <= 1000001; i++) {
        if (d[i] == false)
            for (int j = 2 * i; j <= 1000001; j += i)
                d[j] = true;
    }
}

void soinsoo(int n) {
    int temp = n;

    while (temp != 1) {
        for (int i = 2; i <= n; i++) {
            if (d[i] == false) {
                while (temp%i == 0) {
                    temp /= i;
                    cout << i << "\n";
                }
            }
        }
    }
}


