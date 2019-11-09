//
// Created by kimdong on 2018-03-23.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int deque[10001] = { 0 };
    int front = 5000, back = 5001;
    int N = 0;
    int x = 0;
    string cmd;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push_front") {
            cin >> x;
            deque[front--] = x;
        }
        else if (cmd == "push_back") {
            cin >> x;
            deque[back++] = x;
        }

        else if (cmd == "pop_front") {
            cout << (front + 1 != back ? deque[++front] : -1) << endl;
        }
        else if (cmd == "pop_back") {
            cout << (front + 1 != back ? deque[--back] : -1) << endl;
        }

        else if (cmd == "size") {
            cout << back - front - 1 << endl;
        }

        else if (cmd == "empty") {
            cout << (front + 1 != back ? 0 : 1) << endl;
        }

        else if (cmd == "front") {
            cout << (front + 1 != back ? deque[front + 1] : -1) << endl;
        }

        else if (cmd == "back") {
            cout << (front + 1 != back ? deque[back - 1] : -1) << endl;
        }
    }

    return 0;
}
