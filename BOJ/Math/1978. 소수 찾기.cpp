//
// Created by kimdong on 2018-05-09.
//

#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    int d[101] = { 0 };
    int count = 0;

    for (int i = 1; i <= N; i++)
        cin >> d[i];

    for (int i = 1; i <= N; i++) {
        for (int j = d[i] - 1; (j > 1) && (d[i] % j != 0); j--) {
            if (j == 2)
                count++;
        }
        if (d[i] == 2)
            count++;

    }
    cout << count;

    return 0;
}