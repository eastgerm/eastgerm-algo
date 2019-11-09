//
// Created by kimdong on 2018-05-16.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int t[1000001] = { 1 };
bool d[1000001] = { true,true };

void input(); // 입력 함수
void prime();
void goldbach(int n); // 골드바흐 판정 및 출력 함수

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    input();

    return 0;
}

void input() {
    prime();
    for (int i = 1; t[i - 1] != 0; i++) {
        cin >> t[i];
        goldbach(t[i]);
    }
}

void prime() {
    for (int i = 2; i*i <= 1000001; i++) {
        if (d[i] == false)
            for (int j = 2 * i; j <= 1000001; j += i)
                d[j] = true;
    }
}

void goldbach(int n) {
    int temp = 0; int visit = 0;

    if (n % 2 == 0) {
        for (int i = 3; i <= n / 2; i++) {
            if (d[i] == false) {
                temp = n - i;
                if (d[temp] == false) {
                    cout << n << " = " << i << " + " << temp;
                    cout << "\n";
                    visit = 1;
                    break;
                }
            }
        }
        if (visit == 0 && n != 0) {
            cout << "Goldbach's conjecture is wrong.";
            cout << "\n";
        }
    }
    else {
        cout << "Goldbach's conjecture is wrong.";
        cout << "\n";
    }
}


