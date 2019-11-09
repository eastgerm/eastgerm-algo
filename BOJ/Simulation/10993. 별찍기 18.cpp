//
// Created by kimdong on 2019-08-24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
vector<int> rSize, cSize;

string charStar(int n) {
    string res;
    for (int i = 0; i < n; i++) res += "*";
    return res;
}

string space(int n) {
    string res;
    for (int i = 0; i < n; i++) res += " ";
    return res;
}

void input();

void filledSize();

vector<string> reverse(vector<string> star);

vector<string> star(int n);

void canvas();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    canvas();
    return 0;
}

void input() {
    cin >> N;
    filledSize();
}

void filledSize() {
    rSize.assign(N + 1, 0);
    cSize.assign(N + 1, 0);
    rSize[1] = cSize[1] = 1;
    for (int i = 2; i <= N; i++) rSize[i] = 2 * rSize[i - 1] + 1, cSize[i] = 2 * cSize[i - 1] + 3;
}

vector<string> reverse(vector<string> star) {
    int len = star.size();
    vector<string> res(len, "");
    for (int i = 0; i < len; i++) res[i] = star[len - 1 - i];
    return res;
}

vector<string> star(int n) {
    vector<string> res;
    if (n == 1) {
        res.assign(1, "*");
        return res;
    }
    res.assign(rSize[n], "");
    vector<string> prevStar = n % 2 == 0 ? star(n - 1) : reverse(star(n - 1));
    int startSpace = cSize[n - 1] + 1;
    int tempSpace = startSpace - 1;
    for (int i = 0; i < rSize[n]; i++) {
        if (i == 0) res[i] = charStar(cSize[n]);
        else if (i >= 1 && i <= rSize[n - 1])
            res[i] = space(i) + "*" + space(rSize[n - 1] - i) + prevStar[i - 1] + space(startSpace - 2 * i) + "*";
        else if (i != rSize[n] - 1) res[i] = space(i) + "*" + (tempSpace -= 2, space(tempSpace)) + "*";
        else res[i] = space(i) + "*";
    }
    return n % 2 == 0 ? res : reverse(res);
}

void canvas() {
    vector<string> nowStar = star(N);
    for (int i = 0; i < rSize[N]; i++) cout << nowStar[i] + "\n";
}