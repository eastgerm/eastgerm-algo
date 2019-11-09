//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct medal{
    int name;
    long long score;
};

bool compare(medal a, medal b){return a.score > b.score;}

int N,K;
vector<medal> teams;
long long kScore = 0;

void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();

    return 0;
}

void input(){
    cin >> N >> K;
    teams.assign(N,{0,0});
    for(int i=0; i<N; i++) {
        cin >> teams[i].name;
        long long gold,silver,bronze;
        cin >> gold >> silver >> bronze;
        teams[i].score += (gold*100000000000000 + silver*10000000 + bronze);
        if(teams[i].name == K) kScore = teams[i].score;
    }
}
int result(){
    int grade = 0;
    sort(teams.begin(),teams.end(),compare);
    for(int i=0; ;i++){
        if(teams[i].score == kScore) return grade + 1;
        if(teams[i].score > kScore) grade++;
    }
}
void output(){
    cout << result() << '\n';
}