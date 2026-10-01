//
// Created by eftia on 1/8/2026.
//
//Phitron Module: 4

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {

    Node a(10), b(20), c(30);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;

    return 0;
}
