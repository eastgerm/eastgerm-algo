//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
using namespace std;

int N,C;
vector<bool> shotTerm(2000001,false);

void input();
int result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> C;
    int time;
    for(int i=0; i<N; i++) {
        cin >> time;
        for(int tc=time; tc<=C; tc+=time) shotTerm[tc] = true;
    }
}
void output() {
    int ans = 0;
    for(int i=1; i<=2000000; i++) if(shotTerm[i]) ans++;
    cout << ans << '\n';
}