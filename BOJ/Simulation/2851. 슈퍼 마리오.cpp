//
// Created by kimdong on 2019-05-05.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> mushroom(10,0);

void input();
int near100(int a);
int result();
void output();

int main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    input();
    output();
    return 0;
}

void input(){
    for(int i=0; i<10; i++) cin >> mushroom[i];
}
int near100(int a){
    return a > 100 ? a-100 : 100-a;
}
int result(){
    int sum = 0;
    for(int i=0; i<10; i++){
        sum += mushroom[i];
        if(sum == 100) return 100;
        else if(sum > 100) return near100(sum) <= near100(sum-mushroom[i]) ? sum : sum-mushroom[i];
    }
    return sum;
}
void output(){
    cout << result() << '\n';
}