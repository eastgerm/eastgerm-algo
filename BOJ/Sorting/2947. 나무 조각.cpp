//
// Created by kimdong on 2019-08-16.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> nums(5,0);

void input();
void bubble();
void output();

int main() {
    input();
    bubble();
    return 0;
}

void input() {
    for (int i = 0; i < 5; i++) cin >> nums[i];
}

void bubble() {
    for(int i=1; i<5; i++) {
        if(nums[i-1] > nums[i]) {
            int temp = nums[i-1];
            nums[i-1] = nums[i];
            nums[i] = temp;
            for(int j=0; j<5; j++) cout << nums[j] << ' ';
            cout << '\n';
        }
    }
    if(nums[0] != 1) bubble();
    else if(nums[1] != 2) bubble();
    else if(nums[2] != 3) bubble();
    else if(nums[3] != 4) bubble();
    else if(nums[4] != 5) bubble();
}