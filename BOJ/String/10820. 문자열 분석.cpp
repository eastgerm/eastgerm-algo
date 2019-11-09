//
// Created by kimdong on 2018-03-27.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count[4] = { 0 };

    string input;

    while (getline(cin, input)) {
        for (int i = 0; input[i] != NULL; i++) {
            if (input[i] >= 'a'&& input[i] <= 'z')
                count[0]++;
            else if (input[i] >= 'A'&& input[i] <= 'Z')
                count[1]++;
            else if (input[i] >= '0'&& input[i] <= '9')
                count[2]++;
            else if (input[i] == ' ')
                count[3]++;
        }
        for (int i = 0; i < 4; i++) {
            cout << count[i] << ' ';
        }
        count[0] = count[1] = count[2] = count[3] = 0;
        cout << endl;
    }

    return 0;
}