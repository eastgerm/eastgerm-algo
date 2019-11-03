//
// Created by kimdong on 2019-10-29.
//

#include <iostream>
#include <vector>

using namespace std;

int N, M, K;
vector<long long> nums;
vector<long long> Tree;

long long init(vector<long long> &a, vector<long long> &tree, int node, int start, int end) {
    if (start == end) {
        return tree[node] = a[start];
    }
    return tree[node] = init(a, tree, node * 2, start, (start + end) / 2) +
                        init(a, tree, node * 2 + 1, (start + end) / 2 + 1, end);
}

long long find(vector<long long> &tree, int node, int start, int end, int left, long long right) {
    if (left > end || right < start) {
        return 0;
    }
    if (left <= start && end <= right) {
        return tree[node];
    }
    return find(tree, node * 2, start, (start + end) / 2, left, right) +
           find(tree, node * 2 + 1, (start + end) / 2 + 1, end, left, right);
}

void update(vector<long long> &tree, int node, int start, int end, int index, long long diff) {
    if (index < start || index > end) return;
    tree[node] = tree[node] + diff;
    if (start != end) {
        update(tree, node * 2, start, (start + end) / 2, index, diff);
        update(tree, node * 2 + 1, (start + end) / 2 + 1, end, index, diff);
    }
    else {
        nums[index] += diff;
    }
}

void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    func();
    return 0;
}

void func() {
    cin >> N >> M >> K;
    nums.assign(N, 0);
    Tree.assign(4000001, 0);
    for (int i = 0; i < N; i++) cin >> nums[i];
    init(nums, Tree, 1, 0, N - 1);
    for (int i = 0; i < M + K; i++) {
        int type, b;
        long long c;
        cin >> type >> b >> c;
        if (type == 1) {
            long long diff = c - nums[b - 1];
            update(Tree, 1, 0, N - 1, b - 1, diff);
        } else {
            cout << find(Tree, 1, 0, N - 1, b - 1, c - 1) << '\n';
        }
    }
}