//
// Created by kimdong on 2018-08-31.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N = 0;
vector<int> p;

void all();

int main()
{
    ios_base::sync_with_stdio(false);
    all();

    return 0;
}

void all() {
    cin >> N;
    p.assign(N, 0);
    for (int i = 0; i < N; i++)
        p[i] = i + 1;

    do {
        for (int i = 0; i < N; i++)
            cout << p[i] << ' ';
        cout << '\n';
    } while (next_permutation(p.begin(), p.end()));
}