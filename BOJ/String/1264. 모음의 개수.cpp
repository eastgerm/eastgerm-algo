//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>

using namespace std;

string line;

void func();

int main() {
    func();
    return 0;
}

void func() {
    while (true) {
        int ans = 0;
        getline(cin,line);
        if(line == "#") return;
        int len = line.length();
        for(int i=0; i<len; i++) {
            if(line[i] == 'a' || line[i] == 'A') ans++;
            else if(line[i] == 'e' || line[i] == 'E') ans++;
            else if(line[i] == 'i' || line[i] == 'I') ans++;
            else if(line[i] == 'o' || line[i] == 'O') ans++;
            else if(line[i] == 'u' || line[i] == 'U') ans++;
        }
        cout << ans << '\n';
    }
}