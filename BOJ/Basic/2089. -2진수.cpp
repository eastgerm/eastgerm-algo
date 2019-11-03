//
// Created by kimdong on 2018-05-09.
//

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int temp = N;

    stack<int>A;

    while (temp != 1 && temp != 0) {
        if (temp < 0) {
            temp = -temp;
            A.push(temp % 2);
            temp += 1; temp /= 2;
        }
        else {
            A.push(temp % 2);
            temp /= 2; temp = -temp;
        }
    }
    A.push(temp);

    while (!(A.empty())) {
        cout << A.top(); A.pop();
    }

    return 0;
}