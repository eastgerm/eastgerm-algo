//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

int T;
int r,e,c;

void inputT();
void input();
void advertise();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++){
        input();
        advertise();
    }

    return 0;
}

void inputT(){
    cin >> T;
}
void input(){
    cin >> r >> e >> c;
}
void advertise(){
    if(r < e-c) cout << "advertise" << endl;
    else if(r == e-c) cout << "does not matter" << endl;
    else cout << "do not advertise" << endl;
}