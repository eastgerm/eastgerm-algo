//
// Created by kimdong on 2018-08-31.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct capsule {
    int num;
    string trace;
};

int T = 0;
int A = 0; int B = 0;
queue<capsule> prior;
bool visit[10000] = { false };

void solve();
void inputT();
void inputAB();
void initial();
void visitQ(capsule cap);
int bfs();
int shiftD(int a);
int shiftS(int a);
int shiftL(int a);
int shiftR(int a);

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}

void solve() {
    inputT();
    for (int tc = 0; tc < T; tc++) {
        inputAB();
        bfs();
        initial();
    }
}

void inputT() {
    cin >> T;
}

void inputAB() {
    cin >> A >> B;
}

void initial() {
    while (!prior.empty())
        prior.pop();
    for (int i = 0; i < 10000; i++)
        visit[i] = false;
}


void visitQ(capsule cap) {
    int n1 = cap.num;
    string t1 = cap.trace; string t2 = cap.trace; string t3 = cap.trace; string t4 = cap.trace;
    int D = shiftD(n1); int S = shiftS(n1); int L = shiftL(n1); int R = shiftR(n1);

    if (!visit[D]) {
        t1 += (string)"D";
        prior.push({ D,t1 }); visit[D] = true;
    }
    if (!visit[S]) {
        t2 += (string)"S";
        prior.push({ S,t2 }); visit[S] = true;
    }
    if (!visit[L]) {
        t3 += (string)"L";
        prior.push({ L,t3 }); visit[L] = true;
    }
    if (!visit[R]) {
        t4 += (string)"R";
        prior.push({ R,t4 }); visit[R] = true;
    }
}

int bfs() {
    prior.push({ A,"" }); visit[A] = true;
    while (!prior.empty()) {
        if (prior.front().num==B) {
            cout << prior.front().trace << endl;
            return 1;
        }
        visitQ(prior.front());
        prior.pop();
    }
    return -1;
}

int shiftD(int a) {
    a *= 2;
    if (a > 9999)
        return a % 10000;
    else
        return a;
}
int shiftS(int a) {
    if (a == 0)
        return 9999;
    else
        return a - 1;
}
int shiftL(int a) {
    int t1 = 0;
    t1 = (a / 1000) * 1000;
    a -= t1;
    a *= 10;
    a += (t1 / 1000);
    return a;
}
int shiftR(int a) {
    int t1 = 0;
    t1 = a % 10;
    a -= t1;
    a /= 10;
    a += (t1 * 1000);
    return a;
}