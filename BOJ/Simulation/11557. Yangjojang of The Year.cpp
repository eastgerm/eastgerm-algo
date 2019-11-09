//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int T;

void inputT();
void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) func();
    return 0;
}

void inputT() {
    cin >> T;
}
void func() {
    int N; cin >> N;
    vector<string> names(N,"");
    int max = -1;
    int idx = -1;
    for(int i=0; i<N; i++) {
        cin >> names[i];
        int value; cin >> value;
        if(value > max) max = value, idx = i;
    }
    cout << names[idx] << '\n';
}