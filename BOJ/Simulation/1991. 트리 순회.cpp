//
// Created by kimdong on 2019-08-20.
//

#include <iostream>
#include <vector>

using namespace std;

struct node {
    char name;
    vector<char> childs;
};

int N;
char parents, leftChild, rightChild;
vector<node> items;

void input();

int findIdx(char root);

void pre(char root);

void in(char root);

void post(char root);

void output();

int main() {
    input();
    output();
    return 0;
}

void input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> parents >> leftChild >> rightChild;
        node item;
        item.name = parents;
        item.childs.push_back(leftChild);
        item.childs.push_back(rightChild);
        items.push_back(item);
    }
}

int findIdx(char root) {
    for (int i = 0; i < N; i++)
        if (items[i].name == root) return i;
}

void pre(char root) {
    if(root == '.') return;
    int idx = findIdx(root);
    cout << root;
    pre(items[idx].childs[0]);
    pre(items[idx].childs[1]);
}

void in(char root) {
    if(root == '.') return;
    int idx = findIdx(root);
    in(items[idx].childs[0]);
    cout << root;
    in(items[idx].childs[1]);
}

void post(char root) {
    if(root == '.') return;
    int idx = findIdx(root);
    post(items[idx].childs[0]);
    post(items[idx].childs[1]);
    cout << root;
}

void output() {
    pre('A');
    cout << '\n';
    in('A');
    cout << '\n';
    post('A');
    cout << '\n';
}