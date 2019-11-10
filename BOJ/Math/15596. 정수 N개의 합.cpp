//
// Created by kimdong on 2019-08-16.
//

#include <vector>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    int len = a.size();
    for(int i=0; i<len; i++) ans += (long long)a[i];
    return ans;
}
