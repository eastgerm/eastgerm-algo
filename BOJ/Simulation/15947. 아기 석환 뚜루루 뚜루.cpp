//
// Created by kimdong on 2019-07-14.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> dic;
int N;

void makeDic();
void input();
void sukhwan();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    makeDic();
    input();
    sukhwan();
    return 0;
}


void makeDic() {
    dic.emplace_back("baby");
    dic.emplace_back("sukhwan");
    dic.emplace_back("tururu");
    dic.emplace_back("turu");
    dic.emplace_back("very");
    dic.emplace_back("cute");
    dic.emplace_back("tururu");
    dic.emplace_back("turu");
    dic.emplace_back("in");
    dic.emplace_back("bed");
    dic.emplace_back("tururu");
    dic.emplace_back("turu");
    dic.emplace_back("baby");
    dic.emplace_back("sukhwan");
}
void input() {
    cin >> N;
}
void sukhwan() {
    N -= 1;
    int cycle = N/14;
    int idx = N%14;
    string voca = dic[idx];
    if(voca == "turu") {
        if(cycle < 4) {
            for(int i=0; i<cycle; i++) voca += "ru";
        }
        else {
            cycle += 1;
            voca = "tu+ru*";
            cout << voca << cycle << '\n';
            return;
        }
    }
    else if(voca == "tururu") {
        if(cycle < 3) {
            for(int i=0; i<cycle; i++) voca += "ru";
        }
        else {
            cycle += 2;
            voca = "tu+ru*";
            cout << voca << cycle << '\n';
            return;
        }
    }
    cout << voca << '\n';
}