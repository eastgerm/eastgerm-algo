//
// Created by kimdong on 2019-05-20.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
int N;
vector<int> arr;
vector<bool> visit;
vector<int> ans;
int start;
int cycle = 0;

void inputT();
void input();
void go(int idx);
void field();
void output();

int main() {
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        field();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> N;
    arr.assign(N+1,0);
    visit.assign(N+1,0);
    for(int i=1; i<=N; i++) cin >> arr[i];
}
void go(int idx) {
    int next = arr[idx];
    if(!visit[next]) visit[next] = true, ans.push_back(next), go(next);
    else {
        start = next;
        int len = ans.size();
        for(int i=0; i<len; i++) {
            if(ans[i] != start) visit[i] = false;
            else break;
        }
        cycle++;
        ans.clear();
    }
}
void field() {
    for(int i=1; i<=N; i++) {
        if(!visit[i]) visit[i] = true, ans.push_back(i), go(i);
    }
}
void output() {
    cout << cycle << '\n';
    cycle = 0;
    arr.clear(), visit.clear(), ans.clear();
}