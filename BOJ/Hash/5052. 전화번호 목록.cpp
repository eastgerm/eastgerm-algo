//
// Created by kimdong on 2019-05-10.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int T;
int n;
vector<string> address;
map<string,int> mapAddress;

void inputT();
void input();
string consist();
void output();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    inputT();
    for(int tc=0; tc<T; tc++) {
        input();
        output();
    }
    return 0;
}

void inputT() {
    cin >> T;
}
void input() {
    cin >> n;
    address.assign(n,"");
    for(int i=0; i<n; i++) {
        cin >> address[i];
        mapAddress[address[i]] = i;
    }
}
string consist() {
    sort(address.begin(),address.end());
    int addressLen = address.size();
    if(addressLen == 1) return "YES";
    for(int i=1; i<addressLen; i++) {
        int tempLen = address[i].length();
        for(int j=1; j<tempLen; j++) if(mapAddress.count(address[i].substr(0,j))) return "NO";
    }
    return "YES";
}
void output() {
    cout << consist() << '\n';
    address.clear(), mapAddress.clear();
}