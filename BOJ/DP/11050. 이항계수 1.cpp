//
// Created by kimdong on 2019-05-15.
//

#include <iostream>
#include <vector>
using namespace std;

int N,K;
vector<vector<int>> C;

void input();
int result();
void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
}
int result() {
    C.assign(N+1,vector<int> (N+1,0));
    C[0][0] = 1;
    C[1][0] = C[1][1] = 1;
    for(int i=2; i<=N; i++)
        for(int j=0; j<=i; j++) C[i][j] = j==0 ? 1 : C[i-1][j-1] + C[i-1][j];
    return C[N][K];
}
void output() {
    cout << result() << '\n';
}