//
// Created by kimdong on 2018-08-28.
//

#include <iostream>
#include <stack>
using namespace std;

int N = 0;
int p[10000] = { 0 };
stack<int> bowl;

void input();
int nextP();
void swap(int *a,int *b);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    nextP();

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> p[i];
}

int nextP() {
    int i_max = 0;
    int j_max = 0;

    for (int i = 1; i < N; i++) {
        if (p[i - 1] < p[i])
            i_max = i;
    }
    if (i_max == 0) {
        cout << -1 << endl;
        return -1;
    }
    for (int j = i_max; j < N; j++) {
        if (p[j] > p[i_max - 1])
            j_max = j;
    }
    swap(&p[i_max - 1], &p[j_max]);
    for (int i = i_max; i < N; i++)
        bowl.push(p[i]);
    for (int i = i_max; i < N; i++) {
        p[i] = bowl.top();
        bowl.pop();
    }

    for (int i = 0; i < N; i++)
        cout << p[i] << " ";
    return 1;
}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}