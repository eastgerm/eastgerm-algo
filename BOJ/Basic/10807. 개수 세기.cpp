//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int nums[201] = {0};
    int N; cin >> N;
    for(int i=0; i<N; i++) {
        int num; cin >> num, nums[num+100]++;
    }
    int v; cin >> v;
    cout << nums[v+100] << '\n';
    return 0;
}