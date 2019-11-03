//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N,M,K;
vector<vector<int>> A,B,C;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    A.assign(N,vector<int>(M,0));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> A[i][j];
    cin >> M >> K;
    B.assign(M,vector<int>(K,0));
    for(int i=0; i<M; i++)
        for(int j=0; j<K; j++) cin >> B[i][j];
}
void output() {
    C.assign(N,vector<int>(K,0));
    for(int i=0; i<N; i++) {
        for(int j=0; j<K; j++) {
            for(int k=0; k<M; k++)
                C[i][j] += A[i][k]*B[k][j];
            cout << C[i][j] << ' ';
        }
        cout << '\n';
    }
}
