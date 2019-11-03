//
// Created by kimdong on 2018-04-02.
//

#include <iostream>
#include <vector>
using namespace std;

#define MIN(x,y) ((x)<(y)?(x):(y)) // 둘 중 작은거 선택

int N;

void input(); // 입력 함수
int makeOne(); // 1로만들기 함수
void output(); // 출력 함수

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    input();
    makeOne();
    output();
    return 0;
}

void input(){
    cin >> N;
}
int makeOne(){
    vector<int> dp(N+1,0); //dp값 저장할 벡터
    for(int i=2; i<=N; i++){ // dp[2]까지는 초기값을 설정했으니 그 뒤부터 N까지
        int min = dp[i-1] + 1; // dp[1뺀 수]+1을 min으로 설정
        if(i%3 == 0) min = MIN(min,dp[i/3]+1); // 3으로 나눠진다면 현재 min값과 dp[3으로 나눈 몫]+1 을 비교
        if(i%2 == 0) min = MIN(min,dp[i/2]+1); // 2로 나눠진다면 현재 min값과 dp[2로 나눈 몫]+1 을 비교
        dp[i] = min; // 위 과정에서 살아남은 min값을 dp[i]값으로 적용
    }
    return dp[N]; // 정답은 dp[N]
}
void output(){
    cout << makeOne() << endl;
}