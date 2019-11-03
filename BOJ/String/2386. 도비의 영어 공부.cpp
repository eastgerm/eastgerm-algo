//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <string>

using namespace std;

void func();

int main() {
    func();
    return 0;
}

void func() {
    char alpha;
    string line;
    while (true) {
        cin >> alpha;
        if (alpha == '#') return;
        int ans = 0;
        getline(cin, line);
        int len = line.length();
        for (int i = 0; i < len; i++)
            if (line[i] == alpha || line[i] == alpha - 'a' + 'A') ans++;
        cout << alpha << ' ' << ans << '\n';
    }
}