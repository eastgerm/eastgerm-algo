//
// Created by kimdong on 2019-06-17.
//

#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int N,M;
vector<int> target;
deque<int> QQ;
int ans;

void input();
void result();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    result();
    output();
    return 0;
}

void input() {
    cin >> N >> M;
    target.assign(M,0);
    for(int i=0; i<M; i++) cin >> target[i];
    for(int i=1; i<=N; i++) QQ.push_back(i);
}
void result() {
    for(int i=0; i<M; i++) {
        if(target[i] == QQ.front()) QQ.pop_front();
        else {
            deque<int> temp1,temp2;
            int cnt1 = 0, cnt2 = 0;
            temp1 = QQ;
            temp2 = QQ;
            while(target[i] != temp1.front()) {
                temp1.push_back(temp1.front());
                temp1.pop_front();
                cnt1++;
            }
            while(target[i] != temp2.front()) {
                temp2.push_front(temp2.back());
                temp2.pop_back();
                cnt2++;
            }
            if(cnt1 < cnt2) {
                while(target[i] != QQ.front()) {
                    QQ.push_back(QQ.front());
                    QQ.pop_front();
                    ans++;
                }
            }
            else {
                while(target[i] != QQ.front()) {
                    QQ.push_front(QQ.back());
                    QQ.pop_back();
                    ans++;
                }
            }
            QQ.pop_front();
        }
    }
}
void output() {
    cout << ans << '\n';
}