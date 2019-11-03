//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N,M;
vector<string> dataBase,user,ans;

void input();
void search();
void output();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    search();
    output();
    return 0;
}

void input(){
    cin >> N >> M;
    dataBase.assign(N,"");
    user.assign(M,"");
    for(int i=0; i<N; i++) cin >> dataBase[i];
    for(int i=0; i<M; i++) cin >> user[i];
    sort(dataBase.begin(),dataBase.end());
    sort(user.begin(),user.end());
}
void search(){
    int start = 0;
    for(int i=0; i<N; i++){
        for(int j=start; j<M; j++){
            if(dataBase[i] < user[j]) break;
            if(dataBase[i] == user[j]){
                ans.push_back(user[j]);
                start = j+1;
                break;
            }
        }
    }
    sort(ans.begin(),ans.end());
}
void output(){
    int len = ans.size();
    cout << len << '\n';
    for(int i=0; i<len; i++) cout << ans[i] << '\n';
}