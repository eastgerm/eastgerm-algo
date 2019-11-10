//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int N,M;
vector<int> nums;
map<int,int> ada;

void input();
void dfs(int depth, vector<int> bowl);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(0,vector<int>());
    return 0;
}

void input() {
    cin >> N >> M;
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
}
void dfs(int depth, vector<int> bowl) {
    if(depth == M) {
        int label= 0;
        int now10 = 1;
        for(int i=0; i<M; i++) label += bowl[i]*now10, now10 *= 10;
        if(!ada.count(label)) {
            ada[label] = label;
            for(int i=0; i<M; i++) cout << bowl[i] << ' ';
            cout << '\n';
        }
        return;
    }
    for(int i=0; i<N; i++) {
        bowl.push_back(nums[i]);
        dfs(depth+1,bowl);
        bowl.pop_back();
    }
}