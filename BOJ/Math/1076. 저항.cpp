//
// Created by kimdong on 2019-04-30.
//

#include <iostream>
#include <string>
using namespace std;

string ten,one,exp;

void input();
long long makeNum(string s);
long long makeExp(string s);
void output();

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    cin >> ten >> one >> exp;
}
long long makeNum(string s){
    if(s == "black") return 0;
    else if(s == "brown") return 1;
    else if(s == "red") return 2;
    else if(s == "orange") return 3;
    else if(s == "yellow") return 4;
    else if(s == "green") return 5;
    else if(s == "blue") return 6;
    else if(s == "violet") return 7;
    else if(s == "grey") return 8;
    else if(s == "white") return 9;
}
long long makeExp(string s){
    if(s == "black") return 1;
    else if(s == "brown") return 10;
    else if(s == "red") return 100;
    else if(s == "orange") return 1000;
    else if(s == "yellow") return 10000;
    else if(s == "green") return 100000;
    else if(s == "blue") return 1000000;
    else if(s == "violet") return 10000000;
    else if(s == "grey") return 100000000;
    else if(s == "white") return 1000000000;
}
void output(){
    long long ans = (makeNum(ten)*10 + makeNum(one)) * makeExp(exp);
    cout << ans << '\n';
}