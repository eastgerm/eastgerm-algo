//
// Created by kimdong on 2019-06-12.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int T;
int N;
string order;
vector<vector<char>> _up,_front,_down,_back,_left,_right;

void inputT();
void inputN();
void input();
void rotateCube();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        inputN();
        for(int i=0; i<N; i++) {
            input();
            rotateCube();
        }
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void inputN() {
    cin >> N;
    _up.assign(3,vector<char>(3,'w'));
    _front.assign(3,vector<char>(3,'r'));
    _down.assign(3,vector<char>(3,'y'));
    _back.assign(3,vector<char>(3,'o'));
    _left.assign(3,vector<char>(3,'g'));
    _right.assign(3,vector<char>(3,'b'));
}
void input() {
    cin >> order;
}
void rotateCube() {
    vector<vector<char>> temp;
    if(order == "U+") {
        temp = _up;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _up[i][j] = temp[2-j][i];

        int tempLine[3] = {_back[2][0],_back[2][1],_back[2][2]};
        _back[2][2] = _left[0][2];
        _back[2][1] = _left[1][2];
        _back[2][0] = _left[2][2];
        _left[0][2] = _front[0][0];
        _left[1][2] = _front[0][1];
        _left[2][2] = _front[0][2];
        _front[0][0] = _right[2][0];
        _front[0][1] = _right[1][0];
        _front[0][2] = _right[0][0];
        _right[2][0] = tempLine[2];
        _right[1][0] = tempLine[1];
        _right[0][0] = tempLine[0];
    }
    else if(order == "U-") {
        temp = _up;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _up[i][j] = temp[j][2-i];

        int tempLine[3] = {_back[2][0],_back[2][1],_back[2][2]};
        _back[2][0] = _right[0][0];
        _back[2][1] = _right[1][0];
        _back[2][2] = _right[2][0];
        _right[0][0] = _front[0][2];
        _right[1][0] = _front[0][1];
        _right[2][0] = _front[0][0];
        _front[0][2] = _left[2][2];
        _front[0][1] = _left[1][2];
        _front[0][0] = _left[0][2];
        _left[2][2] = tempLine[0];
        _left[1][2] = tempLine[1];
        _left[0][2] = tempLine[2];
    }
    else if(order == "F+") {
        temp = _front;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _front[i][j] = temp[2-j][i];

        int tempLine[3] = {_up[2][0],_up[2][1],_up[2][2]};
        _up[2][2] = _left[2][2];
        _up[2][1] = _left[2][1];
        _up[2][0] = _left[2][0];
        _left[2][2] = _down[0][0];
        _left[2][1] = _down[0][1];
        _left[2][0] = _down[0][2];
        _down[0][0] = _right[2][2];
        _down[0][1] = _right[2][1];
        _down[0][2] = _right[2][0];
        _right[2][2] = tempLine[2];
        _right[2][1] = tempLine[1];
        _right[2][0] = tempLine[0];
    }
    else if(order == "F-") {
        temp = _front;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _front[i][j] = temp[j][2-i];

        int tempLine[3] = {_up[2][0],_up[2][1],_up[2][2]};
        _up[2][0] = _right[2][0];
        _up[2][1] = _right[2][1];
        _up[2][2] = _right[2][2];
        _right[2][0] = _down[0][2];
        _right[2][1] = _down[0][1];
        _right[2][2] = _down[0][0];
        _down[0][2] = _left[2][0];
        _down[0][1] = _left[2][1];
        _down[0][0] = _left[2][2];
        _left[2][0] = tempLine[0];
        _left[2][1] = tempLine[1];
        _left[2][2] = tempLine[2];
    }
    else if(order == "D+") {
        temp = _down;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _down[i][j] = temp[2-j][i];

        int tempLine[3] = {_front[2][0],_front[2][1],_front[2][2]};
        _front[2][2] = _left[2][0];
        _front[2][1] = _left[1][0];
        _front[2][0] = _left[0][0];
        _left[2][0] = _back[0][0];
        _left[1][0] = _back[0][1];
        _left[0][0] = _back[0][2];
        _back[0][0] = _right[0][2];
        _back[0][1] = _right[1][2];
        _back[0][2] = _right[2][2];
        _right[0][2] = tempLine[2];
        _right[1][2] = tempLine[1];
        _right[2][2] = tempLine[0];
    }
    else if(order == "D-") {
        temp = _down;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _down[i][j] = temp[j][2-i];

        int tempLine[3] = {_front[2][0],_front[2][1],_front[2][2]};
        _front[2][0] = _right[2][2];
        _front[2][1] = _right[1][2];
        _front[2][2] = _right[0][2];
        _right[2][2] = _back[0][2];
        _right[1][2] = _back[0][1];
        _right[0][2] = _back[0][0];
        _back[0][2] = _left[0][0];
        _back[0][1] = _left[1][0];
        _back[0][0] = _left[2][0];
        _left[0][0] = tempLine[0];
        _left[1][0] = tempLine[1];
        _left[2][0] = tempLine[2];
    }
    else if(order == "B+") {
        temp = _back;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _back[i][j] = temp[2-j][i];

        int tempLine[3] = {_down[2][0],_down[2][1],_down[2][2]};
        _down[2][2] = _left[0][0];
        _down[2][1] = _left[0][1];
        _down[2][0] = _left[0][2];
        _left[0][0] = _up[0][0];
        _left[0][1] = _up[0][1];
        _left[0][2] = _up[0][2];
        _up[0][0] = _right[0][0];
        _up[0][1] = _right[0][1];
        _up[0][2] = _right[0][2];
        _right[0][0] = tempLine[2];
        _right[0][1] = tempLine[1];
        _right[0][2] = tempLine[0];
    }
    else if(order == "B-") {
        temp = _back;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _back[i][j] = temp[j][2-i];

        int tempLine[3] = {_down[2][0],_down[2][1],_down[2][2]};
        _down[2][0] = _right[0][2];
        _down[2][1] = _right[0][1];
        _down[2][2] = _right[0][0];
        _right[0][2] = _up[0][2];
        _right[0][1] = _up[0][1];
        _right[0][0] = _up[0][0];
        _up[0][2] = _left[0][2];
        _up[0][1] = _left[0][1];
        _up[0][0] = _left[0][0];
        _left[0][2] = tempLine[0];
        _left[0][1] = tempLine[1];
        _left[0][0] = tempLine[2];
    }
    else if(order == "L+") {
        temp = _left;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _left[i][j] = temp[2-j][i];

        int tempLine[3] = {_back[0][0],_back[1][0],_back[2][0]};
        _back[2][0] = _down[2][0];
        _back[1][0] = _down[1][0];
        _back[0][0] = _down[0][0];
        _down[2][0] = _front[2][0];
        _down[1][0] = _front[1][0];
        _down[0][0] = _front[0][0];
        _front[2][0] = _up[2][0];
        _front[1][0] = _up[1][0];
        _front[0][0] = _up[0][0];
        _up[2][0] = tempLine[2];
        _up[1][0] = tempLine[1];
        _up[0][0] = tempLine[0];
    }
    else if(order == "L-") {
        temp = _left;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _left[i][j] = temp[j][2-i];

        int tempLine[3] = {_back[0][0],_back[1][0],_back[2][0]};
        _back[0][0] = _up[0][0];
        _back[1][0] = _up[1][0];
        _back[2][0] = _up[2][0];
        _up[0][0] = _front[0][0];
        _up[1][0] = _front[1][0];
        _up[2][0] = _front[2][0];
        _front[0][0] = _down[0][0];
        _front[1][0] = _down[1][0];
        _front[2][0] = _down[2][0];
        _down[0][0] = tempLine[0];
        _down[1][0] = tempLine[1];
        _down[2][0] = tempLine[2];
    }
    else if(order == "R+") {
        temp = _right;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _right[i][j] = temp[2-j][i];

        int tempLine[3] = {_back[2][2],_back[1][2],_back[0][2]};
        _back[0][2] = _up[0][2];
        _back[1][2] = _up[1][2];
        _back[2][2] = _up[2][2];
        _up[0][2] = _front[0][2];
        _up[1][2] = _front[1][2];
        _up[2][2] = _front[2][2];
        _front[0][2] = _down[0][2];
        _front[1][2] = _down[1][2];
        _front[2][2] = _down[2][2];
        _down[0][2] = tempLine[2];
        _down[1][2] = tempLine[1];
        _down[2][2] = tempLine[0];
    }
    else if(order == "R-") {
        temp = _right;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++) _right[i][j] = temp[j][2-i];

        int tempLine[3] = {_back[2][2],_back[1][2],_back[0][2]};
        _back[2][2] = _down[2][2];
        _back[1][2] = _down[1][2];
        _back[0][2] = _down[0][2];
        _down[2][2] = _front[2][2];
        _down[1][2] = _front[1][2];
        _down[0][2] = _front[0][2];
        _front[2][2] = _up[2][2];
        _front[1][2] = _up[1][2];
        _front[0][2] = _up[0][2];
        _up[2][2] = tempLine[0];
        _up[1][2] = tempLine[1];
        _up[0][2] = tempLine[2];
    }
}
void output() {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) cout << _up[i][j];
        cout << '\n';
    }
}