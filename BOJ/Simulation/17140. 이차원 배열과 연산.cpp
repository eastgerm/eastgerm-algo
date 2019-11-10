//
// Created by kimdong on 2019-07-02.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct int2 {
    int num;
    int cnt;
};

int R,C,K;
vector<vector<int>> matrixR,matrixC;
int rowSize = 3, colSize = 3;

bool compare(int2 a, int2 b) {
    return a.cnt == b.cnt ? a.num < b.num : a.cnt < b.cnt;
}
void input();
int filledMatrix();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> R >> C >> K;
    matrixR.assign(3,vector<int>(3,0));
    for(int i=0; i<rowSize; i++)
        for(int j=0; j<colSize; j++) cin >> matrixR[i][j];
}
int filledMatrix() {
    for(int ans=0; ans<=100; ans++) {
        if(R<=rowSize && C<=colSize) {
            if(matrixR[R-1][C-1] == K) return ans;
        }

        vector<vector<int>> temp; int tempCol, tempRow;
        rowSize >= colSize ? (temp = matrixR, tempRow = rowSize) : (temp = matrixC, tempRow = colSize);

        tempCol = 0;
        for(int i=0; i<tempRow; i++) {
            vector<int2> nums(101,{101,1001});
            int len = temp[i].size();
            sort(temp[i].begin(),temp[i].end());
            for(int ti=0; ti<len; ti++) {
                if(temp[i][ti] == 101) break;
                if(nums[temp[i][ti]].num == 101) {
                    nums[temp[i][ti]].num = temp[i][ti];
                    nums[temp[i][ti]].cnt = 1;
                }
                else nums[temp[i][ti]].cnt++;
            }
            sort(nums.begin(),nums.end(),compare);
            temp[i].clear();
            for(int ti=0; ;ti++) {
                if(nums[ti].num == 101) break;
                temp[i].push_back(nums[ti].num);
                temp[i].push_back(nums[ti].cnt);
            }
            int newLen = temp[i].size();
            tempCol = tempCol > newLen ? tempCol : newLen;
        }
        for(int i=0; i<tempRow; i++) {
            int len = temp[i].size();
            for(int ti=len; ti<tempCol; ti++) temp[i].push_back(101);
        }

        if(rowSize >= colSize) {
            matrixR = temp;
            matrixC.assign(tempCol,vector<int>(tempRow,0));
            for(int i=0; i<tempCol; i++)
                for(int j=0; j<tempRow; j++) matrixC[i][j] = matrixR[j][i];
            rowSize = tempRow, colSize = tempCol;
        }
        else {
            matrixC = temp;
            matrixR.assign(tempCol,vector<int>(tempRow,0));
            for(int i=0; i<tempCol; i++)
                for(int j=0; j<tempRow; j++) matrixR[i][j] = matrixC[j][i];
            rowSize = tempCol, colSize = tempRow;
        }
    }
    return -1;
}
void output() {
    cout << filledMatrix() << '\n';
}