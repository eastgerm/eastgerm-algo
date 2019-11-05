//
// Created by kimdong on 2019-06-14.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> nums;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i];
}
void output() {
    for(int i=1; i<N; i++) {
        int head = nums[0];
        int tail  = nums[i];
        for(int j=head < tail ? head : tail; j>1; j--)
            if(head%j == 0 && tail%j == 0) {
                head /= j, tail /= j;
                break;
            }
        cout << head << '/' << tail << '\n';
    }
}