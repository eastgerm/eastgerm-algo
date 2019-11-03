//
// Created by kimdong on 2019-05-28.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,S;
vector<int> nums;
vector<int> prior;

void input();
int result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> S;
    nums.assign(N,0);
    prior.assign(N,1);
    for(int i=0; i<N; i++) cin >> nums[i];
}
int result() {
    int ans = 0;
    for(int zero=1; zero<=N; zero++) {
        prior.assign(N,1);
        for(int i=0; i<zero; i++) prior[i] = 0;
        do {
            int tempSum = 0;
            int cnt = 0;
            for(int i=0; i<N; i++) {
                if(prior[i] == 0) tempSum += nums[i], cnt++;
                if(cnt == zero) break;
            }
            if(tempSum == S) ans++;
        } while(next_permutation(prior.begin(),prior.end()));
    }
    return ans;
}
void output() {
    cout << result() << '\n';
}