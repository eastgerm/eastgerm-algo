//
// Created by kimdong on 2019-08-15.
//

#include <iostream>
#include <vector>

using namespace std;

int N, K;
vector<int> measure;

void input();
void filledMeasure();
void output();

int main() {
    input();
    filledMeasure();
    output();
    return 0;
}

void input() {
    cin >> N >> K;
}

void filledMeasure() {
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) measure.push_back(i);
    }
}

void output() {
    measure.size() >= K ? cout << measure[K - 1] << '\n' : cout << "0\n";
}