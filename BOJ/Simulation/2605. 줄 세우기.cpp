//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> students;

void input();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    students.assign(N,0);
    for(int i=1; i<=N; i++) {
        int n; cin >> n;
        int idx = i-n-1;
        for(int j=i-1; j>idx; j--) students[j] = students[j-1];
        students[idx] = i;
    }
}
void output() {
    for(int i=0; i<N; i++) cout << students[i] << ' ';
    cout << '\n';
}