//
// Created by kimdong on 2019-05-17.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> minimi(9,0);
vector<bool> prior(9,true);

void input();
void find();

int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    find();
    return 0;
}

void input() {
    for(int i=0; i<9; i++) cin >> minimi[i];
}
void find() {
    for(int i=0; i<7; i++) prior[i] = false;
    do {
        int sum = 0;
        vector<int> answer;
        for(int i=0; i<9; i++) {
            if(!prior[i]) sum += minimi[i], answer.push_back(minimi[i]);
            if(sum > 100) break;
        }
        if(sum == 100) {
            sort(answer.begin(),answer.end());
            for(int i=0; i<7; i++) cout << answer[i] << '\n';
            return ;
        }
    } while(next_permutation(prior.begin(),prior.end()));
}