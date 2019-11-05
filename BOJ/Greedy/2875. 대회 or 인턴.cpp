//
// Created by kimdong on 2019-05-04.
//

#include <iostream>
using namespace std;

int N,M,K;

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
    cin >> N >> M >> K;
}
int result() {
    int total = N + M;
    int currentTeam = N >= 2*M ? M : N/2;
    int trash = total - 3*currentTeam;
    if(trash >= K) return currentTeam;
    else {
        K-=trash;
        currentTeam -= ((K-1)/3 + 1);
        return currentTeam;
    }

}
void output(){
    cout << result() << '\n';
}