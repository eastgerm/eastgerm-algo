//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int i = 0;
    int index = n.length() - 1;


    for (i = n.length() - 1; i >= 0; i -= 3) {
        if (i >= 2)
            n[index--] = ((n[i] - 48) + 2 * (n[i - 1] - 48) + 4 * (n[i - 2] - 48)) + 48;
        else if (i == 1)
            n[index--] = ((n[i] - 48) + 2 * (n[i - 1] - 48)) + 48;
        else
            n[index--] = (n[i] - 48) + 48;
    }
    index++;


    for (int j = index; j <= n.length() - 1; j++)
        cout << n[j];

    return 0;
}