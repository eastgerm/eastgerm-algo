//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct numString {
    vector<string> nums;
};

int N;
vector<vector<numString>> dp;

string itos(int n) {
    char digit = n + '0';
    string temp = " ";
    temp[0] = digit;
    return temp;
}
void input();
string deNum();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
}
string deNum() {
    if(N < 10) return itos(N);
    if(N > 1022) return "-1";
    int cnt = 9;
    dp.emplace_back(vector<numString>(10,{vector<string>()}));
    for(int j=0; j<10; j++) dp[0][j].nums.push_back(itos(j));
    for(int currentRow=1; ;currentRow++) {
        dp.emplace_back(vector<numString>(10,{vector<string>()}));
        for(int j=currentRow; j<10; j++) {
            string nowHead = itos(j);
            int k1Len = dp[currentRow][j-1].nums.size();
            for(int ni=0; ni<k1Len; ni++) {
                cnt++;
                string newNum = dp[currentRow][j-1].nums[ni];
                newNum[0] = j+'0';
                if(cnt == N) return newNum;
                dp[currentRow][j].nums.push_back(newNum);
            }
            int k2Len = dp[currentRow-1][j-1].nums.size();
            for(int ni=0; ni<k2Len; ni++) {
                cnt++;
                string newNum = nowHead + dp[currentRow-1][j-1].nums[ni];
                if(cnt == N) return newNum;
                dp[currentRow][j].nums.push_back(newNum);
            }
        }
    }
}
void output() {
    cout << deNum()+'\n';
}