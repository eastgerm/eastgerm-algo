//
// Created by kimdong on 2019-10-29.
//

#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> myRoot;

void input();

void func();

int find(int node);

void merge(int a, int b);

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    input();
    return 0;
}

void input() {
    scanf("%d %d", &N, &M);
    myRoot.assign(N + 1, -1);
    for (int i = 0; i < M; i++) func();
}

void func() {
    int type, a, b;
    scanf("%d %d %d", &type, &a, &b);
    int sudo = a < b ? a : b;
    int slave = a > b ? a : b;
    switch (type) {
        case 0:
            merge(sudo, slave);
            break;
        case 1:
            find(sudo) == find(slave) ? printf("YES\n") : printf("NO\n");
            break;
        default:
            break;
    }
}

int find(int node) {
    return myRoot[node] == -1 ? node : myRoot[node] = find(myRoot[node]);
}

void merge(int a, int b) {
    int A = find(a);
    int B = find(b);
    if(A != B) myRoot[B] = A;
}