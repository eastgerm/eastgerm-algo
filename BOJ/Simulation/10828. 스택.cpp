//
// Created by kimdong on 2018-03-21.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int stack[10001] = { 0 };
    int top = -1;
    int N = 0;
    int x = 0;
    string cmd;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> x;
            stack[++top] = x;
        }

        else if (cmd == "pop") {
            cout << (top < 0 ? -1 : stack[top--]) << endl;
        }

        else if (cmd == "size") {
            cout << top + 1 << endl;
        }

        else if (cmd == "empty") {
            cout << (top < 0 ? 1 : 0) << endl;
        }

        else if (cmd == "top") {
            cout << (top < 0 ? -1 : stack[top]) << endl;
        }
    }

    return 0;
}
