//
// Created by kimdong on 2018-03-20.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int queue[10001] = { 0 };
    int front = 0, back = 0;
    int N = 0;
    int x = 0;
    string cmd;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> x;
            queue[back++] = x;
        }

        else if (cmd == "pop") {
            cout << (front != back ? queue[front++] : -1) << endl;
        }

        else if (cmd == "size") {
            cout << back-front << endl;
        }

        else if (cmd == "empty") {
            cout << (front != back ? 0 : 1) << endl;
        }

        else if (cmd == "front") {
            cout << (front != back ? queue[front] : -1) << endl;
        }

        else if (cmd == "back") {
            cout << (front != back ? queue[back - 1] : -1) << endl;
        }
    }

    return 0;
}
