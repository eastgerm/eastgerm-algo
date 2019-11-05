//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    vector<int> xs,ys;
    int x,y;
    int xSum = 0, ySum = 0;
    for(int i=0; i<3; i++) cin >> x >> y, xs.push_back(x), ys.push_back(y), xSum += x, ySum += y;
    sort(xs.begin(),xs.end());
    sort(ys.begin(),ys.end());
    cout << xSum - 2*xs[1] << ' ' << ySum - 2*ys[1] << '\n';
    return 0;
}