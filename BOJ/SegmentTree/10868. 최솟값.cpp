//
// Created by kimdong on 2019-10-28.
//

#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<long long> nums;
vector<long long> minTree;

long long min(long long a, long long b) {
    return a < b ? a : b;
}

long long initMin(vector<long long> &a, vector<long long> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = a[start];
    }
    return tree[node] = min(initMin(a, tree, node * 2, start, (start + end) / 2),
                            initMin(a, tree, node * 2 + 1, (start + end) / 2 + 1, end));
}

long long findMin(vector<long long> &tree, int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return 1000000001;
    }
    if (left <= start && end <= right) {
        return tree[node];
    }
    return min(findMin(tree, node * 2, start, (start + end) / 2, left, right),
               findMin(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right));
}

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    cin >> N >> M;
    nums.assign(N, 0);
    minTree.assign(500001, 0);
    for (int i = 0; i < N; i++) cin >> nums[i];
    initMin(nums, minTree, 1, 0, N - 1);
    for (int i = 0; i < M; i++) {
        int start, finish;
        cin >> start >> finish;
        cout << findMin(minTree, 1, 0, N - 1, start - 1, finish - 1) << '\n';
    }
}