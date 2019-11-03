//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N,M;
vector<vector<int>> A;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> N >> M;
    A.assign(N,vector<int>(M,0));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> A[i][j];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int n; cin >> n;
            A[i][j] += n;
        }
}
void output() {
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << A[i][j] << ' ';
        cout << '\n';
    }
}