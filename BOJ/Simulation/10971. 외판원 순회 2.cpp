//
// Created by kimdong on 2018-08-30.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N = 0;
vector<vector<int>> W;
vector<int> per;

void input();
int detect();
void output(int a);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    output(detect());

    return 0;
}

void input() {
    cin >> N;
    W.assign(N, vector<int>(N, 0));
    per.assign(N, 0);
    for (int i = 0; i < N; i++) {
        per[i] = i;
        for (int j = 0; j < N; j++)
            cin >> W[i][j];
    }
}

int detect() {
    int sum = 0; int min = 10000001; bool possible = true;

    do {
        possible = true;

        if (W[per[N - 1]][per[0]] != 0)
            sum = W[per[N - 1]][per[0]];
        else
            possible = false;

        if (possible) {
            for (int i = 1; i < N; i++) {
                if (W[per[i - 1]][per[i]] != 0)
                    sum += W[per[i - 1]][per[i]];
                else {
                    possible = false;
                    break;
                }
            }
        }
        if (possible) {
            if (min > sum)
                min = sum;
        }
    } while (next_permutation(per.begin(), per.end()));

    return min;
}

void output(int a) {
    cout << a << endl;
}