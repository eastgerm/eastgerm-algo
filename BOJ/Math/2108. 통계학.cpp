//
// Created by kimdong on 2019-06-09.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int N;
vector<int> nums;
vector<int> counting(8001,0);
double sum;
int avg,cen,many,range;

void input();
void sorting();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    sorting();
    output();
    return 0;
}

void input() {
    cin >> N;
    nums.assign(N,0);
    for(int i=0; i<N; i++) cin >> nums[i], counting[nums[i]+4000]++, sum += (double)nums[i];
}
void sorting() {
    sort(nums.begin(),nums.end());
    avg = round(sum/N);
    cen = nums[N/2];
    range = nums[N-1] - nums[0];
    vector<int> manys;
    int max = 0;
    for(int i=0; i<=8000; i++) {
        if(counting[i] > max) max = counting[i], manys.clear(), manys.push_back(i-4000);
        else if(counting[i] == max) manys.push_back(i-4000);
    }
    manys.size() == 1 ? many = manys[0] : many = manys[1];
}
void output() {
    cout << avg << '\n' << cen << '\n' << many << '\n' << range << '\n';
}