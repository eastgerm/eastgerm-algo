//
// Created by kimdong on 2018-03-26.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count[26] = { 0 };

    string input;
    cin >> input;

    for (int i = 0; input[i] != NULL; i++) {
        count[input[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        cout << count[i] << ' ';

    return 0;
}