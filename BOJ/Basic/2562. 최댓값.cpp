//
// Created by kimdong on 2019-05-06.
//

#include <iostream>
using namespace std;

struct bowl {
    int score;
    int idx;
};

int nums[10] = {0};
bowl ans = {-1,-1};

void input();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    for(int i=1; i<=9; i++) {
        cin >> nums[i];
        if(nums[i] > ans.score) ans.score = nums[i], ans.idx = i;
    }
}
void output() {
    cout << ans.score << '\n' << ans.idx << '\n';
}