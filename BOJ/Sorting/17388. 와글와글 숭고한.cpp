//
// Created by kimdong on 2019-08-25.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct data {
    string name;
    int cnt;
};

bool compare(data a, data b) {
    return a.cnt < b.cnt;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int x, y, z;
    cin >> x >> y >> z;
    if(x+y+z >= 100) cout << "OK\n";
    else {
        data json[3] = {{"Soongsil", x},
                        {"Korea",    y},
                        {"Hanyang",  z}};
        sort(json, json + 3, compare);
        cout << json[0].name + "\n";
    }
    return 0;
}