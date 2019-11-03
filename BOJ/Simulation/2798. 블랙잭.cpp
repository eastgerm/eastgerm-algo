//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;
vector<int> card;
vector<bool> C;

void input();
int blackJack();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> M;
    card.assign(N,0);
    for(int i=0; i<N; i++) cin >> card[i];
}
int blackJack(){
    int ans = 0;
    C.assign(N,true);
    C[0] = C[1] = C[2] = false;
    do{
        int sum = 0;
        int cnt = 0;
        for(int i=0; i<N; i++){
            if(cnt == 3) break;
            if(!C[i]) sum += card[i], cnt++;
        }
        if(sum == M) return M;
        if(sum > M) ;
        else ans = M-ans < M-sum ? ans : sum;
    }while(next_permutation(C.begin(),C.end()));
    return ans;
}
void output(){
    cout << blackJack() << '\n';
}