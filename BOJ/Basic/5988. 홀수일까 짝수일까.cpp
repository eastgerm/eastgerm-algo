//
// Created by kimdong on 2019-06-13.
//

#include <iostream>
#include <string>
using namespace std;

int N;
string num;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> num;
        int len = num.length();
        (num[len-1]-'0')%2 ? cout << "odd\n" : cout << "even\n";
    }
    return 0;
}