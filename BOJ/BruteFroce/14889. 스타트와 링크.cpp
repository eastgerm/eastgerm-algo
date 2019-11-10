//
// Created by kimdong on 2018-09-07.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N = 0;
int S[20][20] = { 0 };
vector<int> team1;
int total = 0;
int Min = 1000001;

void input();
void teamPick();
void match();
void check();
void output();
int chanSign(int a, int b);
int banddang(int a);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    teamPick();
    match();
    output();

    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cin >> S[i][j];
            total += S[i][j];
        }
}

void teamPick() {
    team1.assign(N, 1);
    for (int i = 0; i < N / 2; i++)
        team1[i] = 0;
}

void match() {
    for(int loof=0;loof<banddang(N);loof++){
        check();
        next_permutation(team1.begin(), team1.end());
    }
}

void check() {
    int tsum1 = 0; int tsum2 = 0;
    int tres = 0;
    for (int i = 0; i < N; i++) {
        if (!team1[i]) {
            for (int j = 0; j < N; j++)
                if (!team1[j])
                    tsum1 += S[i][j];
        }
        else {
            for (int j = 0; j < N; j++)
                if (team1[j])
                    tsum2 += S[i][j];
        }
    }
    tres = chanSign(tsum1, tsum2);
    Min = Min < tres ? Min : tres;
}

void output() {
    cout << Min << endl;
}

int chanSign(int a, int b) {
    if (a - b >= 0)
        return a - b;
    else
        return b - a;
}

int banddang(int a) {
    if (a == 2)
        return 2 / 2;
    else if (a == 4)
        return 6 / 2;
    else if (a == 6)
        return 20 / 2;
    else if (a == 8)
        return 70 / 2;
    else if (a == 10)
        return 252 / 2;
    else if (a == 12)
        return 924 / 2;
    else if (a == 14)
        return 3432 / 2;
    else if (a == 16)
        return 12870 / 2;
    else if (a == 18)
        return 48620 / 2;
    else if (a == 20)
        return 184756 / 2;
    else
        return -1;
}