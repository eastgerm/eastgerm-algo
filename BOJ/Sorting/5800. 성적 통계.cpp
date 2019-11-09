//
// Created by kimdong on 2019-08-20.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
int N;
vector<int> score;

void inputT();

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    inputT();
    for (int tc = 1; tc <= T; tc++) {
        cout << "Class " << tc << '\n';
        func();
    }
    return 0;
}

void inputT() {
    cin >> T;
}

void func() {
    cin >> N;
    score.assign(N, 0);
    for (int i = 0; i < N; i++) cin >> score[i];
    sort(score.begin(), score.end());
    int large = -1;
    for(int i=1; i<N; i++)
        if(score[i] - score[i-1] > large) large = score[i] - score[i-1];
    cout << "Max " << score[score.size()-1] << ", ";
    cout << "Min " << score[0] << ", ";
    cout << "Largest gap " << large << "\n";
}