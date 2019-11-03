//
// Created by kimdong on 2019-03-29.
//

#include <iostream>
#include <algorithm>
using namespace std;
void BSearch(int ar[], int len, int target) {
    int first = 0;
    int last = len - 1;
    int mid = 0;

    while (first <= last) {
        mid = (first + last) / 2;
        if (ar[mid] == target) {
            cout<< "1\n";
            return;
        }
        else {
            if (ar[mid] > target)
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    cout<< "0\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N,M;
    cin >> N;
    int *P = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    sort(P, P + N);
    cin >> M;
    int *Q = new int[M];

    int t = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> Q[i];
        BSearch(P, N, Q[i]);
    }
}