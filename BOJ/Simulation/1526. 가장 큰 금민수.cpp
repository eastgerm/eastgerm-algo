//
// Created by kimdong on 2019-11-12.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string N;
int nNum;
int nLen;
int nums[2] = {7, 4};
bool flag = false;
int ans;

void input();

int makeMinAns();

void dfs(int depth, vector<int> bowl);

int _stoi(string s);

int _vtoi(vector<int> bowl);

void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    dfs(0, vector<int>());
    output();
    return 0;
}

void input() {
    cin >> N;
    nLen = N.length();
    nNum = _stoi(N);
    ans = makeMinAns();
}

int makeMinAns() {
    int res = 0;
    for (int i = 1; i < nLen; i++) {
        res *= 10;
        res += 7;
    }
    return res;
}

void dfs(int depth, vector<int> bowl) {
    if (depth == nLen) {
        int res = _vtoi(bowl);
        if (!flag && res <= nNum) {
            flag = true;
            ans = res;
        }
        return;
    }
    for (int i = 0; i < 2; i++) {
        bowl.push_back(nums[i]);
        dfs(depth + 1, bowl);
        bowl.pop_back();
    }
}

int _stoi(string s) {
    int res = 0;
    int now10 = 1;
    for (int i = nLen - 1; i >= 0; i--) {
        res += now10 * (s[i] - '0');
        now10 *= 10;
    }
    return res;
}

int _vtoi(vector<int> bowl) {
    int res = 0;
    int now10 = 1;
    for (int i = nLen - 1; i >= 0; i--) {
        res += now10 * bowl[i];
        now10 *= 10;
    }
    return res;
}

void output() {
    cout << ans << '\n';
}