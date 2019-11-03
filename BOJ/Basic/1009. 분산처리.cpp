//
// Created by kimdong on 2019-11-03.
//

#include <iostream>
#include <vector>
using namespace std;

int T;
int a,b;

void inputT();
void input();
int findIdx();
void output();

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> a >> b;
}
int findIdx() {
    int cycle = 0;
    vector<int> bowl;
    int norm = a%10;
    int one = norm;
    bowl.push_back(one);
    for(int i=1; ;i++) {
        one *= norm;
        one %= 10;
        if(one == bowl[0]) {
            cycle = i;
            break;
        }
        else bowl.push_back(one);
    }
    int ans = bowl[(b-1)%cycle];
    if(ans) return ans;
    else return 10;
}
void output(){
    cout << findIdx() << '\n';
}