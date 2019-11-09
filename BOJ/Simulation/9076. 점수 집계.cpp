//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    for (int tc = 0; tc < T; tc++) {
        vector<int> score(5,0);
        int sum = 0;
        for(int i=0; i<5; i++) cin >> score[i], sum += score[i];
        sort(score.begin(),score.end());
        score[3]-score[1]>3 ? cout << "KIN\n" : cout << sum-score[0]-score[4] << '\n';
    }
    return 0;
}