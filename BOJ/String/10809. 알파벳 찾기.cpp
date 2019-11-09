//
// Created by kimdong on 2018-03-26.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
    int ada[26] = { 0 };

    string input;
    cin >> input;

    for (int i = 0; input[i] != NULL; i++) {
        if (ada[input[i] - 'a'] == 0) {
            count[input[i] - 'a'] = i;
            ada[input[i] - 'a'] = 1;
        }
    }

    for (int i = 0; i < 26; i++)
        cout << count[i] << ' ';

    return 0;
}