//
// Created by kimdong on 2018-05-16.
//

#include <iostream>
using namespace std;

int M = 0, N = 0;
bool d[1000001] = { true,true };

void input(); // 입력 함수
void prime(int M, int N); // 소수 탐색 함수
void output(bool d[], int M, int N); // 출력 함수

int main()
{
    input();
    prime(M, N);
    output(d, M, N);

    return 0;
}

void input() {
    cin >> M >> N;
}

void prime(int M, int N) {
    for (int i = 2; i*i <= N; i++) {
        if (d[i] == false)
            for (int j = 2 * i; j <= N; j += i)
                d[j] = true;
    }
}

void output(bool d[], int M, int N) {
    for (int i = M; i <= N; i++)
        if (d[i] == false)
            cout << i << " ";
}