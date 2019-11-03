//
// Created by kimdong on 2018-03-26.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string input;
    cin >> input;

    for (int i = 0; input[i] != NULL; i++)
        count++;

    cout << count;

    return 0;
}