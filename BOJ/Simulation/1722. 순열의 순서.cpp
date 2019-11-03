//
// Created by kimdong on 2019-07-08.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
int type;
vector<long long> facto;
long long order;
vector<int> nums;

void input();
void input1();
void input2();
void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    func();
    return 0;
}

void input() {
    cin >> N >> type;
    facto.assign(N,1);
    for(int i=2; i<N; i++) facto[i] = i*facto[i-1];
}
void input1() {
    cin >> order;
    order--;
}
void input2() {
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i];
}
void func() {
    if(type == 1) {
        input1();
        vector<bool> check(N,false);
        for(int i=N-1; i>=0; i--) {
            long long prior = order/facto[i];
            long long cnt = 0;
            for(int j=0; j<N; j++) {
                if(!check[j]) {
                    if(cnt == prior) {
                        cout << j+1 << ' ';
                        check[j] = true;
                        break;
                    }
                    cnt++;
                }
            }
            order %= facto[i];
        }
        return;
    }
    if(type == 2) {
        input2();
        long long ans = 1;
        vector<bool> check(N,false);
        for(int i=0; i<N; i++) {
            long long cnt = 0;
            order = facto[N-1-i];
            for(int j=0; j<nums[i]-1; j++) if(!check[j]) cnt++;
            check[nums[i]-1] = true;
            ans += cnt*order;
        }
        cout << ans << '\n';
        return;
    }
}