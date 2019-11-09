//
// Created by kimdong on 2018-08-30.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N = 0;
int c = 0;
vector<int> A;

void input();
int yangsu(int a);
int distance();
void output(int a);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    output(distance());

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> c;
        A.push_back(c);
    }
}

int yangsu(int a) {
    if (a >= 0) return a;
    else return -a;
}

int distance() {
    int ans = 0; int sum = 0;

    sort(A.begin(), A.end());
    while (next_permutation(A.begin(), A.end())) {
        sum = 0;
        for (int i = 1; i < N; i++)
            sum += yangsu(A[i - 1] - A[i]);
        if (sum > ans)
            ans = sum;
    }
    return ans;
}

void output(int a) {
    cout << a << endl;
}