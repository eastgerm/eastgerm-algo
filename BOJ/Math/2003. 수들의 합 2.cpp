//
// Created by kimdong on 2018-09-12.
//

#include <iostream>
#include <vector>
using namespace std;

void input();
void searchM();

int N = 0;
int M = 0;
vector<int> A;
int cnt = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    searchM();

    return 0;
}

void input() {
    cin >> N >> M;
    A.assign(N, 0);
    for (int i = 0; i < N; i++)
        cin >> A[i];
}

void searchM() {
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int tn = i; tn < N; tn++) {
            sum += A[tn];
            if (sum == M) {
                cnt++;
                break;
            }
            else if (sum > M)
                break;
        }
    }
    cout << cnt << endl;
}