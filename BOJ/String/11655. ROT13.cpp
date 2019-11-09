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
    getline(cin, input);

    for (int i = 0; input[i] != NULL; i++) {
        switch (input[i]) {
            case 'a':
                input[i] = 'n'; break;
            case 'b':
                input[i] = 'o'; break;
            case 'c':
                input[i] = 'p'; break;
            case 'd':
                input[i] = 'q'; break;
            case 'e':
                input[i] = 'r'; break;
            case 'f':
                input[i] = 's'; break;
            case 'g':
                input[i] = 't'; break;
            case 'h':
                input[i] = 'u'; break;
            case 'i':
                input[i] = 'v'; break;
            case 'j':
                input[i] = 'w'; break;
            case 'k':
                input[i] = 'x'; break;
            case 'l':
                input[i] = 'y'; break;
            case 'm':
                input[i] = 'z'; break;
            case 'n':
                input[i] = 'a'; break;
            case 'o':
                input[i] = 'b'; break;
            case 'p':
                input[i] = 'c'; break;
            case 'q':
                input[i] = 'd'; break;
            case 'r':
                input[i] = 'e'; break;
            case 's':
                input[i] = 'f'; break;
            case 't':
                input[i] = 'g'; break;
            case 'u':
                input[i] = 'h'; break;
            case 'v':
                input[i] = 'i'; break;
            case 'w':
                input[i] = 'j'; break;
            case 'x':
                input[i] = 'k'; break;
            case 'y':
                input[i] = 'l'; break;
            case 'z':
                input[i] = 'm'; break;

            case 'A':
                input[i] = 'N'; break;
            case 'B':
                input[i] = 'O'; break;
            case 'C':
                input[i] = 'P'; break;
            case 'D':
                input[i] = 'Q'; break;
            case 'E':
                input[i] = 'R'; break;
            case 'F':
                input[i] = 'S'; break;
            case 'G':
                input[i] = 'T'; break;
            case 'H':
                input[i] = 'U'; break;
            case 'I':
                input[i] = 'V'; break;
            case 'J':
                input[i] = 'W'; break;
            case 'K':
                input[i] = 'X'; break;
            case 'L':
                input[i] = 'Y'; break;
            case 'M':
                input[i] = 'Z'; break;
            case 'N':
                input[i] = 'A'; break;
            case 'O':
                input[i] = 'B'; break;
            case 'P':
                input[i] = 'C'; break;
            case 'Q':
                input[i] = 'D'; break;
            case 'R':
                input[i] = 'E'; break;
            case 'S':
                input[i] = 'F'; break;
            case 'T':
                input[i] = 'G'; break;
            case 'U':
                input[i] = 'H'; break;
            case 'V':
                input[i] = 'I'; break;
            case 'W':
                input[i] = 'J'; break;
            case 'X':
                input[i] = 'K'; break;
            case 'Y':
                input[i] = 'L'; break;
            case 'Z':
                input[i] = 'M'; break;
        }
    }

    cout << input;

    return 0;
}