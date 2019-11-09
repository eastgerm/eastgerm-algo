//
// Created by kimdong on 2018-05-09.
//

#include <iostream>
#include <stack>
using namespace std;

int pow1(int x, int n) {
    int res = 1;
    if (n == 0)
        return 1;
    else {
        while (n--)
            res *= x;
        return res;
    }
}

int main()
{
    int A = 0, B = 0;
    int m = 0;
    int d[25] = { 0 };
    int num = 0;
    stack<int>s;

    cin >> A >> B;
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> d[i];

    for (int i = 1; i <= m; i++) {
        num += pow1(A, m - i)*d[i];
    }

    while (num != 0) {
        s.push(num%B);
        num /= B;
    }

    while (!(s.empty())) {
        cout << s.top() << " "; s.pop();
    }

    return 0;
}