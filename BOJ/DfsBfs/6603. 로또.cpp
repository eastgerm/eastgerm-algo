//
// Created by kimdong on 2018-08-30.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int k = 0;
vector<int> lotto;
vector<int> num;

void input();

int main()
{
    ios_base::sync_with_stdio(false);
    input();

    return 0;
}

void input() {
    while (1) {
        cin >> k;
        if (k == 0)
            break;

        num.assign(k, 0);
        lotto.assign(6, 0);
        lotto.resize(k, 1);
        for (int i = 0; i < k; i++)
            cin >> num[i];

        do {
            for (int i = 0; i < k; i++) {
                if (lotto[i] == 0)
                    cout << num[i] << " ";
            } cout << endl;
        } while (next_permutation(lotto.begin(), lotto.end()));
        cout << endl;
    }
}

