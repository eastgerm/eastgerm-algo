//
// Created by kimdong on 2019-05-25.
//

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int A[10],B[10];
    for(int i=0; i<10; i++) cin >> A[i];
    for(int i=0; i<10; i++) cin >> B[i];
    int aWin = 0, bWin = 0;
    for(int i=0; i<10; i++) {
        if(A[i] > B[i]) aWin++;
        else if(A[i] < B[i]) bWin++;
    }
    if(aWin > bWin) cout << "A\n";
    else if(aWin < bWin) cout << "B\n";
    else cout << "D\n";
    return 0;
}