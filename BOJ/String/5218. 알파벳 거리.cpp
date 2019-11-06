//
// Created by kimdong on 2019-06-25.
//

#include <iostream>
#include <string>
using namespace std;

int T;

void inputT();
int dist(char c1, char c2);
void func();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) func();
    return 0;
}

void inputT(){
    cin >> T;
}
int dist(char c1, char c2) {
    int sub = (c2-'A') - (c1-'A');
    sub += 26;
    sub %= 26;
    return sub;
}
void func() {
    string a,b;
    cin >> a >> b;
    int len = a.length();
    cout << "Distances: ";
    for(int i=0; i<len; i++) cout << dist(a[i],b[i]) << ' ';
    cout << '\n';
}