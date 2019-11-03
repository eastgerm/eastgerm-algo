//
// Created by kimdong on 2019-05-03.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N;
vector<string> map;
int garo = 0,sero = 0;

void input();
void search();
void output();

int main(){
    input();
    search();
    output();
    return 0;
}

void input(){
    cin >> N;
    map.assign(N,"");
    for(int i=0; i<N; i++) cin >> map[i];
}
void search(){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(j==0) ;
            else if(j==1){
                if(map[i][j]=='.' && map[i][j-1]=='.') garo++;
                if(map[j][i]=='.' && map[j-1][i]=='.') sero++;
            }
            else {
                if(map[i][j]=='.' && map[i][j-2]=='X' && map[i][j-1]=='.') garo++;
                if(map[j][i]=='.' && map[j-2][i]=='X' && map[j-1][i]=='.') sero++;
            }

        }
    }
}
void output(){
    cout << garo << " " << sero << endl;
}