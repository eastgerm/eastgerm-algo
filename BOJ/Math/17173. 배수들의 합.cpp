//
// Created by kimdong on 2019-05-07.
//

#include <iostream>
#include <vector>
using namespace std;

int N,M;
vector<int> nums;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    nums.assign(M,0);
    for(int i=0; i<M; i++) cin >> nums[i];
}
int result() {
    int ans = 0;
    for(int i=nums[0]; i<=N; i++) {
        for(int j=0; j<M; j++) {
            if(i%nums[j] == 0) {
                ans += i;
                break;
            }
        }
    }
    return ans;
}
void output() {
    cout << result() << '\n';
}