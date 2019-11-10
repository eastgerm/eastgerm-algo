//
// Created by kimdong on 2019-06-26.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;
vector<int> nums;
vector<bool> chk;

void input();
void dfs(int depth, vector<bool> check,vector<int> bowl);

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(0,chk,vector<int>());
    return 0;
}

void input() {
    cin >> N >> M;
    nums.assign(N,0);
    chk.assign(N,false);
    for(int i=0; i<N; i++) cin >> nums[i];
    sort(nums.begin(),nums.end());
}
void dfs(int depth, vector<bool> check, vector<int> bowl) {
    if(depth == M) {
        for(int i=0; i<M; i++) cout << bowl[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i=0; i<N; i++) {
        if(!check[i] && (depth == 0 || nums[i] > bowl[depth-1])) {
            check[i] = true;
            bowl.push_back(nums[i]);
            dfs(depth+1,check,bowl);
            bowl.pop_back();
            check[i] = false;
        }
    }
}