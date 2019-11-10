//
// Created by kimdong on 2018-09-07.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

struct rotation {
    int mode;
    int dir;
};

string s;
int topni1[8];
int topni2[8];
int topni3[8];
int topni4[8];
int K = 0;
rotation R[100];
bool onoff[3] = { false };
int temp = 0;
int res1 = 0;

void input();
void research();
void output();
void rotateL(int mode);
void rotateR(int mode);

int main()
{
    ios_base::sync_with_stdio(false);
    input();
    research();
    output();

    return 0;
}

void input() {
    cin >> s;
    for (int i = 0; i < 8; i++)
        topni1[i] = s[i] - '0';
    cin >> s;
    for (int i = 0; i < 8; i++)
        topni2[i] = s[i] - '0';
    cin >> s;
    for (int i = 0; i < 8; i++)
        topni3[i] = s[i] - '0';
    cin >> s;
    for (int i = 0; i < 8; i++)
        topni4[i] = s[i] - '0';
    cin >> K;
    for (int i = 0; i < K; i++)
        cin >> R[i].mode >> R[i].dir;
}

void research() {
    for (int i = 0; i < K; i++) {
        topni1[2] != topni2[6] ? onoff[0] = true : onoff[0] = false;
        topni2[2] != topni3[6] ? onoff[1] = true : onoff[1] = false;
        topni3[2] != topni4[6] ? onoff[2] = true : onoff[2] = false;
        switch (R[i].mode) {
            case 1:
                if (R[i].dir > 0) {
                    rotateR(1);
                    if (onoff[0]) {
                        rotateL(2);
                        if (onoff[1]) {
                            rotateR(3);
                            if (onoff[2])
                                rotateL(4);
                        }
                    }
                }
                else {
                    rotateL(1);
                    if (onoff[0]) {
                        rotateR(2);
                        if (onoff[1]) {
                            rotateL(3);
                            if (onoff[2])
                                rotateR(4);
                        }
                    }
                }
                break;
            case 2:
                if (R[i].dir > 0) {
                    rotateR(2);
                    if (onoff[0])
                        rotateL(1);
                    if (onoff[1]) {
                        rotateL(3);
                        if (onoff[2])
                            rotateR(4);
                    }
                }
                else {
                    rotateL(2);
                    if (onoff[0])
                        rotateR(1);
                    if (onoff[1]) {
                        rotateR(3);
                        if (onoff[2])
                            rotateL(4);
                    }
                }
                break;
            case 3:
                if (R[i].dir > 0) {
                    rotateR(3);
                    if (onoff[2])
                        rotateL(4);
                    if (onoff[1]) {
                        rotateL(2);
                        if (onoff[0])
                            rotateR(1);
                    }
                }
                else {
                    rotateL(3);
                    if (onoff[2])
                        rotateR(4);
                    if (onoff[1]) {
                        rotateR(2);
                        if (onoff[0])
                            rotateL(1);
                    }
                }
                break;
            case 4:
                if (R[i].dir > 0) {
                    rotateR(4);
                    if (onoff[2]) {
                        rotateL(3);
                        if (onoff[1]) {
                            rotateR(2);
                            if (onoff[0])
                                rotateL(1);
                        }
                    }
                }
                else {
                    rotateL(4);
                    if (onoff[2]) {
                        rotateR(3);
                        if (onoff[1]) {
                            rotateL(2);
                            if (onoff[0])
                                rotateR(1);
                        }
                    }
                }
                break;
        }
    }
    res1 = 1 * topni1[0] + 2 * topni2[0] + 4 * topni3[0] + 8 * topni4[0];
}

void output() {
    cout << res1 << endl;
}

void rotateL(int mode) {
    switch (mode) {
        case 1:
            temp = topni1[0];
            for (int i = 0; i < 7; i++)
                topni1[i] = topni1[i + 1];
            topni1[7] = temp;
            break;
        case 2:
            temp = topni2[0];
            for (int i = 0; i < 7; i++)
                topni2[i] = topni2[i + 1];
            topni2[7] = temp;
            break;
        case 3:
            temp = topni3[0];
            for (int i = 0; i < 7; i++)
                topni3[i] = topni3[i + 1];
            topni3[7] = temp;
            break;
        case 4:
            temp = topni4[0];
            for (int i = 0; i < 7; i++)
                topni4[i] = topni4[i + 1];
            topni4[7] = temp;
            break;
    }
}
void rotateR(int mode) {
    switch (mode) {
        case 1:
            temp = topni1[7];
            for (int i = 7; i > 0; i--)
                topni1[i] = topni1[i - 1];
            topni1[0] = temp;
            break;
        case 2:
            temp = topni2[7];
            for (int i = 7; i > 0; i--)
                topni2[i] = topni2[i - 1];
            topni2[0] = temp;
            break;
        case 3:
            temp = topni3[7];
            for (int i = 7; i > 0; i--)
                topni3[i] = topni3[i - 1];
            topni3[0] = temp;
            break;
        case 4:
            temp = topni4[7];
            for (int i = 7; i > 0; i--)
                topni4[i] = topni4[i - 1];
            topni4[0] = temp;
            break;
    }
}