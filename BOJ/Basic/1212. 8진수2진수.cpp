//
// Created by kimdong on 2018-05-02.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string n;
    cin >> n;

    stack<int> A;

    int i = 0;
    int index = n.length() - 1;


    for (i = n.length() - 1; i >= 0; i--) {
        if(i>=1){
            switch (n[i] - 48) {
                case 0:
                    A.push(0); A.push(0); A.push(0);
                    break;
                case 1:
                    A.push(1); A.push(0); A.push(0);
                    break;
                case 2:
                    A.push(0); A.push(1); A.push(0);
                    break;
                case 3:
                    A.push(1); A.push(1); A.push(0);
                    break;
                case 4:
                    A.push(0); A.push(0); A.push(1);
                    break;
                case 5:
                    A.push(1); A.push(0); A.push(1);
                    break;
                case 6:
                    A.push(0); A.push(1); A.push(1);
                    break;
                case 7:
                    A.push(1); A.push(1); A.push(1);
                    break;
            }
        }
        else {
            switch (n[i] - 48) {
                case 0:
                    A.push(0);
                    break;
                case 1:
                    A.push(1);
                    break;
                case 2:
                    A.push(0); A.push(1);
                    break;
                case 3:
                    A.push(1); A.push(1);
                    break;
                case 4:
                    A.push(0); A.push(0); A.push(1);
                    break;
                case 5:
                    A.push(1); A.push(0); A.push(1);
                    break;
                case 6:
                    A.push(0); A.push(1); A.push(1);
                    break;
                case 7:
                    A.push(1); A.push(1); A.push(1);
                    break;
            }
        }
    }


    while (!(A.empty())) {
        cout << A.top(); A.pop();
    }

    return 0;
}