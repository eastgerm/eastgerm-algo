//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int n;

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    while(true) {
        int ans = 0;
        vector<int> nums(100,0);
        cin >> n;
        if(n == -1) return;
        nums[n]++;
        if(2*n < 100) nums[2*n]++;
        while(true) {
            cin >> n;
            if(n == 0) break;
            nums[n]++;
            if(2*n < 100) nums[2*n]++;
        }
        for(int i=1; i<100; i++) if(nums[i] == 2) ans++;
        cout << ans << '\n';
    }
}