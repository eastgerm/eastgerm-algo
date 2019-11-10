//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

int T;
int hp,mp,att,deffen;
int dHp,dMp,dAtt,dDeffen;

void inputT();
void input();
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++){
        input();
        output();
    }
    return 0;
}

void inputT(){
    cin >> T;
}
void input(){
    cin >> hp >> mp >> att >> deffen;
    cin >> dHp >> dMp >> dAtt >> dDeffen;
}
int result(){
    int ans = 0;
    int resHp = hp + dHp;
    int resMp = mp + dMp;
    int resAtt = att + dAtt;
    int resDeffen = deffen + dDeffen;
    resHp = resHp < 1 ? 1 : resHp;
    resMp = resMp < 1 ? 1 : resMp;
    resAtt = resAtt < 0 ? 0 : resAtt;
    ans = resHp + 5*resMp + 2*(resAtt + resDeffen);
    return ans;
}
void output(){
    cout << result() << '\n';
}