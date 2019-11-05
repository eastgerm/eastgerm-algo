//
// Created by kimdong on 2019-04-09.
//

#include <iostream>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y))

int N=0;
int dp[5001]={0,-1,-1,1,-1,1};

void input();
void makeDP();
void output();

int main() {
    input();
    makeDP();
    output();
    return 0;
}

void input(){
    cin >> N;
}
void makeDP(){
    for(int i=6; i<=N; i++){
        int min=987654321;
        for(int k=1; k<i; k++){
            if(dp[k]>0 && dp[i-k]>0){
                min=MIN(min,dp[k]+dp[i-k]);
            }
        }
        dp[i]=min==987654321?-1:min;
    }
}
void output(){
    cout << dp[N] << endl;
}