//
// Created by kimdong on 2019-05-05.
//

#include <iostream>
#include <vector>
using namespace std;

int N,L;
vector<vector<int>> friends;
vector<bool> visit;

void input();
void invite(int person);
int wedding();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> L;
    friends.assign(N+1,vector<int>());
    visit.assign(N+1,false);
    int a,b;
    for(int i=0; i<L; i++) cin >> a >> b, friends[a].push_back(b), friends[b].push_back(a);
}
void invite(int person){
    int len = friends[person].size();
    for(int i=0; i<len; i++) {
        int newPerson = friends[person][i];
        visit[newPerson] = true;
    }
}
int wedding(){
    int cnt = 0;
    invite(1);
    int sangLen = friends[1].size();
    for(int i=0; i<sangLen; i++) invite(friends[1][i]);
    for(int i=2; i<=N; i++) if(visit[i]) cnt++;
    return cnt;
}
void output(){
    cout << wedding() << '\n';
}