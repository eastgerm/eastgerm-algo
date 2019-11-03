//
// Created by kimdong on 2019-05-31.
//

#include <iostream>
#include <vector>
using namespace std;

int start,finish;

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
    cin >> start >> finish;
}
int result() {
    int ans = 0;
    int now = 1;
    vector<int> nums(finish+1,0);
    for(int i=1; i<=finish; i++){
        if(i > now*(now+1)/2) now++;
        nums[i] = now;
        if(i >= start) ans += nums[i];
    }
    return ans;
}
void output() {
    cout << result() << '\n';
}