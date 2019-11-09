//
// Created by kimdong on 2018-03-14.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cpps;

    for (int i = 0; i < 100; i++) {
        getline(cin, cpps);
        cout << cpps << endl;
    }

    return 0;
}