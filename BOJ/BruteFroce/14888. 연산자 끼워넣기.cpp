//
// Created by kimdong on 2018-09-07.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N = 0;
int A[11] = { 0 }; // 숫자들
int cal[4] = { 0 }; // 연산자들 +,-,*,/
vector<int> calList; // 전체 연산자 list
int Max = -1000000000;
int Min = 1000000000;

void input(); // 입력 함수
void makeList(); // 전체 연산자 list 만드는 함수
void check(); // 현재 전체 연산자 list를 사용하여 값 계산 하는 함수
void calcul(); // 전체 연산자 list를 갖고 모든 경우의수(조합) 제공하는 함수
void output(); // 출력 함수

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    makeList();
    calcul();
    output();

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < 4; i++)
        cin >> cal[i];
}

void makeList() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < cal[i]; j++)
            calList.push_back(i); // 0:+, 1:-, 2:*, 3:/ 순서로 입력된 갯수만큼 push
}

void calcul() {
    do {
        check();
    } while (next_permutation(calList.begin(), calList.end())); // 조합 경우의 수 만큼 반복
}

void check() {
    int tsum = A[0];
    for (int i = 0; i < N - 1; i++) { // 숫자 갯수 만큼
        switch (calList[i]) {
            case 0:
                tsum += A[i + 1];
                break;
            case 1:
                tsum -= A[i + 1];
                break;
            case 2:
                tsum *= A[i + 1];
                break;
            case 3:
                tsum /= A[i + 1];
                break;
        }
    }
    Max = Max > tsum ? Max : tsum; // 크면 max로
    Min = Min < tsum ? Min : tsum; // 작으면 min으로
}

void output() {
    cout << Max << endl << Min << endl;
}